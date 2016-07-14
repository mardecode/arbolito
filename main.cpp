#include "tabulador.h"
#include <iostream>
using namespace std;

int main(){

    Tabulador * t = new Tabulador("x ^ 2 + x");

    /*
     * generarVector( limiteIzquierdo, limiteDerecho , Diferencial )
     */
    auto datos = t->generarVector(0.0,10.0,1.0);

    for(auto i:datos){
        cout << i[0] << " ; " << i[1] << endl;
    }
}

