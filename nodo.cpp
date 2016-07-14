#include "Nodo.h"

Nodo::Nodo(double (*operacion ) (double , double))
{
    this->operar = operacion;
    cout << "#Op ";
    //this->hijo1 = n1;
    //this->hijo2 = n2;

}
Nodo::Nodo(bool var)
{
    this->is_variable = var;
    cout << "#Vr ";
}

Nodo::Nodo(int val)
{

    this->valor = double(val);
    this->is_valor = true;
    cout << "#val ";
}


Nodo::Nodo(double val)
{
    this->valor = val;
    this->is_valor = true;
    cout << "#val ";
}


double Nodo::resolver(double x){
    if (this->is_variable){
        //cout << "variab"<<endl;
        return x;
    }
    if (this->is_valor){
        //cout << "valor"<<endl;
        return this->valor;
    }
    //cout << "oper"<<endl;
    //cout << operar(hijo1->resolver(x),hijo2->resolver(x))<< endl;
    return operar(hijo1->resolver(x),hijo2->resolver(x));
}
