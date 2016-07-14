#ifndef NODO_H
#define NODO_H

class Nodo
{
protected:
    //


public:
    Nodo();
    Nodo(double);
    Nodo(int);
    Nodo(bool);
    Nodo( double (*operacion ) (double , double),Nodo*,Nodo*);

    Nodo * hijo1 = 0;
    Nodo * hijo2 = 0;
    //
    bool  is_variable;
    bool  is_valor;

    double valor = false;
    bool var = false;

    //
    double (*operar ) (double , double);

    //
    double resolver(double);


};

#endif // NODO_H
