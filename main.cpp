#include "tabulador.h"
#include <iostream>
using namespace std;
#include "analizador.h"
#include "parser.h"

int main(){

      Parser * p = new Parser("( 5 + 3 ) * sin x");

      auto res = p->parsear();
      for (auto i :res){
          cout << i ;
      }
      cout<< "\n";

    Analizador * a = new Analizador(res);
    auto r = a->postorden();

    for (auto i :r){
        cout << i ;
    }







     /*
     * generarVector( limiteIzquierdo, limiteDerecho , Diferencial )
     */

    /*
    Tabulador * t = new Tabulador("( x + y ) * 1 sin x");
    auto datos = t->generarVector(0,10,0,10,0.1);


    cout << "main: " << "X  " << " "<< "Y  " << " " << "Z"<<endl;
    for (auto i: datos){
        cout << "       " << i[0] << "   "<<i[1] << "   " << i[2]<<endl;
    }*/

    /*
     * Aqui las dimensiones deberias poner ->setDimensiones(2,t->dimX,t->dimY)
     */
    //cout << "Dim x:  " << t->dimX  << "Dim Y: " << t->dimY << endl;


}

