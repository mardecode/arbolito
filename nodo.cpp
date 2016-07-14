#include "Nodo.h"


Nodo::Nodo(double (*operacion ) (double , double), Nodo * n1, Nodo *n2)
{
    this->operar = operacion;
    this->hijo1 = n1;
    this->hijo2 = n2;
}
Nodo::Nodo(bool var)
{
    this->is_variable = var;
}

Nodo::Nodo(int val)
{
    this->valor = double(val);
    this->is_valor = true;
}


Nodo::Nodo(double val)
{
    this->valor = val;
    this->is_valor = true;
}


double Nodo::resolver(double x){
    if (this->is_variable){
        return x;
    }
    if (this->is_valor){
        return this->valor;
    }
    return operar(hijo1->resolver(x),hijo2->resolver(x));
}
