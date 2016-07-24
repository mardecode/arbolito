#include "tabulador.h"

Tabulador::Tabulador(string ecuacion)
{
    this->ecuacion = ecuacion;
    Parser * p = new Parser(ecuacion);
    auto expresion = p->parsear();

    Analizador * a = new Analizador(expresion);
    cout << expresion.size() << endl;
    a->print_vector(expresion,"Inicio");
    auto preorden = a->postorden();

    this->arbol = new Arbol(preorden) ;
    this->arbol->crearArbol();

}

void Tabulador::buscarVar(string e) {
    for (auto i:e) {
        if (i == 'x'){

            this->dosd = true;
            cout << "X detectado" << endl;
        }
        else if (i == 'y' and this->dosd){
            this->tresd = true;
            cout << "Y detectado. 3D activado" << endl;
        }
    }

}


vector<vector<double>> Tabulador::generarVector(double izqX, double derX,double izqY, double derY,double dif){
    vector<vector<double>> datos;
    buscarVar(this->ecuacion);
    if(this->tresd){
        cout << "****** Graficando en 3D  ******* " << endl;
        double temp  = izqY;


        this->dimX = 0;

        for(izqX;izqX<=derX;izqX+=dif){
        //cout << this->arbol->solve(izq) << endl;
            //cout << "here"<<endl;
            izqY = temp;
            this->dimX  ++;
            this->dimY = 0;
            for(izqY;izqY<=derY;izqY+=dif){
                //cout << dif <<"    x: "<<izqX << "<="<< derX  << "    y: "  << izqY<< "<="<< derY <<endl;
                vector<double> temp;
                temp.push_back(izqX);
                temp.push_back(izqY);
                temp.push_back(this->arbol->solve(izqX,izqY));

                datos.push_back(temp);
                this->dimY  ++;
            }

        }
    }
    else {
        cout << "****** Graficando en 2D  ******* " << endl;

        this->dimY = 1;
        this->dimX = 0;
         for(izqX;izqX<=derX;izqX+=dif){
        //cout << this->arbol->solve(izq) << endl;

            vector<double> temp;
            temp.push_back(izqX);
            temp.push_back(this->arbol->solve(izqX));
            temp.push_back(0.0);

            datos.push_back(temp);
            this->dimX ++;
        }
    }


    this->dosd = false;
    this->tresd = false;
    return datos;
}
