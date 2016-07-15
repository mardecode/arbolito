#include "tabulador.h"
#include <iostream>
using namespace std;

int main(){

     /*
     * generarVector( limiteIzquierdo, limiteDerecho , Diferencial )
     */
    Tabulador * t = new Tabulador("x + y ^ 2");
    auto datos = t->generarVector(0,10,0,10,0.1);


    cout << "main: " << "X  " << " "<< "Y  " << " " << "Z"<<endl;
    for (auto i: datos){
        cout << "       " << i[0] << "   "<<i[1] << "   " << i[2]<<endl;
    }

    /*
     * Aqui las dimensiones deberias poner ->setDimensiones(2,t->dimX,t->dimY)
     */
    cout << "Dim x:  " << t->dimX  << "Dim Y: " << t->dimY << endl;


}

