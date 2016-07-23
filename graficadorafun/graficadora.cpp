#include "graficadora.h"
#include "ui_graficadora.h"
#include "tabulador.h"

#include <vector>
#include <iostream>

using namespace std;

Graficadora::Graficadora(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Graficadora)
{
    ui->setupUi(this);
    this->model->setHorizontalHeaderItem(0,new QStandardItem(QString("X")));
    this ->model->setHorizontalHeaderItem(1,new QStandardItem(QString("Y")));
    this ->model->setHorizontalHeaderItem(2,new QStandardItem(QString("Z")));


    this->ui->tableView->setModel(this->model);

    renderer = vtkSmartPointer<vtkRenderer>::New();

    renderWindow->AddRenderer(renderer);
   // renderWindowInteractor->SetRenderWindow(renderWindow);
    //TAMAÑO DE LOS EJES X Y Z
    axes->SetTotalLength(20.0,25.0,25.0);
    axes->SetConeRadius(0.2);
    //axes->SetUserTransform(transform);
    renderer->AddActor(axes);

    renderer->AddActor(actor);
    renderer->SetBackground(.1, .1, .2);

    //renderWindow->Render();
    //renderWindowInteractor->Start();
    this->ui->qvtkWidget->GetRenderWindow()->AddRenderer(renderer);
}

Graficadora::~Graficadora()
{
    delete ui;
}

void Graficadora::on_pushButton_clicked()
{
    auto ecuacion = this ->ui->lineEdit->text().toUtf8().constData();
    //auto diferencial = this->ui->doubleSpinBox->value();
    /*
      * generarVector( limiteIzquierdo, limiteDerecho , Diferencial )
      */
     Tabulador * t = new Tabulador(ecuacion);
     auto datos = t->generarVector(-20,20,-20,20,0.5);

    int ejex= 0;
    int ejey= 0;
     cout << "main: " << "X  " << " "<< "Y  " << " " << "Z"<<endl;
     for (auto i: datos){
         //cout << "       " << i[0] << "   "<<i[1] << "   " << i[2]<<endl;
         this ->model->setItem(ejex,0,new QStandardItem(QString::number(i[0])));
         this ->model->setItem(ejex,1,new QStandardItem(QString::number(i[1])));
         this ->model->setItem(ejex,2,new QStandardItem(QString::number(i[2])));
         ejex++;
     }
     this->ui->tableView->setModel(this->model);

     for(auto i:datos){
           double origen[3]={i[0],i[1],i[2]};

         points->InsertNextPoint(origen);
           }

     /*
      * Aqui las dimensiones del grid->setDimensiones(2,t->dimX,t->dimY)
      */
    structuredGrid->SetDimensions(1, t->dimX,t->dimY);
    structuredGrid->SetPoints(points);

    std::cout << "There are " << structuredGrid->GetNumberOfPoints() << " points." << std::endl; // there should be 2*3*2 = 12 points
    std::cout << "There are " << structuredGrid->GetNumberOfCells() << " cells." << std::endl; // The 12 points define the corners of 2 cubes/cells (4 points are shared by both cubes)

      #if VTK_MAJOR_VERSION <= 5
    outlineFilter->SetInputConnection(structuredGrid->GetProducerPort());
  #else
    outlineFilter->SetInputData(structuredGrid);
  #endif
    outlineFilter->Update();

  #if VTK_MAJOR_VERSION <= 5
    geometryFilter->SetInputConnection(structuredGrid->GetProducerPort());
  #else
    geometryFilter->SetInputData(structuredGrid);
  #endif
    geometryFilter->Update();

    // Creando un mapper y actor

    mapper->SetInputConnection(geometryFilter->GetOutputPort());
    actor->SetMapper(mapper);


    actor->GetProperty()->SetPointSize(2);
    actor->GetProperty()->SetColor(.9,.5,0.5);




}


void Graficadora::on_pushButton_2_clicked()
{
    renderer = vtkSmartPointer<vtkRenderer>::New();
}
