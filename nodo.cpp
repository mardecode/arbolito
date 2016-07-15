#include "Nodo.h"

Nodo::Nodo(double (*operacion ) (double , double))
{
    this->operar = operacion;
    cout << "#Op ";
    //this->hijo1 = n1;
    //this->hijo2 = n2;

}
Nodo::Nodo(bool var,bool var2)
{
    this->is_variableX = var;
    this->is_variableY = var2;
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


double Nodo::resolver(double x,double y){
    if (this->is_variableX){
        //cout << "variab"<<endl;
        return x;
    }
    if(this->is_variableY){
        return y;
    }
    if (this->is_valor){
        //cout << "valor"<<endl;
        return this->valor;
    }
    //cout << "oper"<<endl;
    // cout << hijo1->resolver(x,y) << "  " << hijo2->resolver(x,y) << endl;
    return operar(hijo1->resolver(x,y),hijo2->resolver(x,y));
}
