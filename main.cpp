#include <iostream>
#include <map>
#include "funciones.h"
#include "Nodo.h"
#include "parser.h"
#include "analizador.h"

using namespace std;

int main(){
/*
    Nodo * n1 = new Nodo(2);
    Nodo * n2 = new Nodo(true);
    Nodo * n3 = new Nodo(suma,n1,n2);

    Nodo * s2 = new Nodo(5);
    Nodo * s1 = new Nodo(suma,n3,s2);

    //Nodo
    cout << s1->resolver(8)<<endl;
*/

    /*
    map<string,double> mapita ;
    mapita["+"] = 1;
    mapita["*"] = 2;

    auto it =  mapita.find("+") ;
    if ( it == mapita.end()){
        cout <<"no ha"  << endl;
    }
    else{
        cout <<"sep"  << endl;
    }
*/
    Parser * p = new Parser("5 + 12 * 11 + x + 1234");
    auto expresion = p->parsear();

    Analizador * a = new Analizador(expresion);



    return 0;

}

