#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace  std;
class Nodo
{
protected:
    //


public:
    Nodo();
    Nodo(double);
    Nodo(int);
    Nodo(bool,bool); //si es x o y
    Nodo( double (*operacion ) (double , double));

    Nodo * hijo1 = 0;
    Nodo * hijo2 = 0;
    //
    bool  is_variableX = false;
    bool  is_variableY = false;

    bool  is_valor = false;

    double valor;

    //
    double (*operar ) (double , double);

    //
    double resolver(double,double y = 0) ;


};

#endif // NODO_H
