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
    Nodo(bool);
    Nodo( double (*operacion ) (double , double));

    Nodo * hijo1 = 0;
    Nodo * hijo2 = 0;
    //
    bool  is_variable = false;
    bool  is_valor = false;

    double valor;

    //
    double (*operar ) (double , double);

    //
    double resolver(double);


};

#endif // NODO_H
