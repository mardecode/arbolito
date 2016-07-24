#include "Nodo.h"

Nodo::Nodo(double (*operacion ) (double , double), bool una)
{
    this->operar = operacion;
    this->is_unario = una;
    if (una) cout << "#OpUna ";
    else cout << "#OpBin ";
    //this->hijo1 = n1;
    //this->hijo2 = n2;

}


Nodo::Nodo(bool var, bool var2, bool negativo)
{

    this->is_variableX = var;
    this->is_variableY = var2;
    this->is_negativo = negativo;
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
        if (this->is_negativo) return -x;

        else    return x;

    }
    if(this->is_variableY){
        if (this->is_negativo) return -y;
        else return y;
    }
    if (this->is_valor){
        //cout << "valor"<<endl;
        return this->valor;
    }

    if(this->is_unario){
        return operar(hijo1->resolver(x,y),0);
    }
    else{
        return operar(hijo1->resolver(x,y),hijo2->resolver(x,y));
    }
}
