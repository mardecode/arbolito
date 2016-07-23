#ifndef GRAFICADORA_H
#define GRAFICADORA_H

#include <vtkVersion.h>
#include <vtkCellArray.h>
#include "vtkCylinderSource.h"
#include "vtkPolyDataMapper.h"
#include "vtkActor.h"
#include "vtkRenderer.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkProperty.h"
#include "vtkCamera.h"
#include "vtkSmartPointer.h"

#include <vtkAxesActor.h>
#include <vtkTransform.h>


#include <vtkCellData.h>
#include <vtkDoubleArray.h>
#include <vtkPoints.h>
#include <vtkPolyLine.h>
#include <vtkPolyData.h>

#include <vtkSmartPointer.h>
#include <vtkStructuredGrid.h>
#include <vtkXMLStructuredGridWriter.h>
#include <vtkMath.h>
#include <vtkPolyDataMapper.h>
#include <vtkProperty.h>

#include <vtkStructuredGridOutlineFilter.h>
#include <vtkStructuredGridGeometryFilter.h>
#include <QStandardItemModel>
#include <QMainWindow>

namespace Ui {
class Graficadora;
}

class Graficadora : public QMainWindow
{
    Q_OBJECT

public:

    vtkSmartPointer<vtkStructuredGrid> structuredGrid =
      vtkSmartPointer<vtkStructuredGrid>::New();

    vtkSmartPointer<vtkStructuredGridOutlineFilter> outlineFilter =
      vtkSmartPointer<vtkStructuredGridOutlineFilter>::New();

    vtkSmartPointer<vtkPoints> points =
      vtkSmartPointer<vtkPoints>::New();

    vtkSmartPointer<vtkStructuredGridGeometryFilter> geometryFilter =
      vtkSmartPointer<vtkStructuredGridGeometryFilter>::New();

    vtkSmartPointer<vtkPolyDataMapper> mapper =
      vtkSmartPointer<vtkPolyDataMapper>::New();

    vtkSmartPointer<vtkActor> actor =
      vtkSmartPointer<vtkActor>::New();

    vtkSmartPointer<vtkRenderer> renderer =
      vtkSmartPointer<vtkRenderer>::New();
    vtkSmartPointer<vtkRenderWindow> renderWindow =
      vtkSmartPointer<vtkRenderWindow>::New();

    vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor =
      vtkSmartPointer<vtkRenderWindowInteractor>::New();

    vtkSmartPointer<vtkAxesActor> axes =
      vtkSmartPointer<vtkAxesActor>::New();



    explicit Graficadora(QWidget *parent = 0);
    ~Graficadora();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Graficadora *ui;
    QStandardItemModel *model =new QStandardItemModel();
};

#endif // GRAFICADORA_H
