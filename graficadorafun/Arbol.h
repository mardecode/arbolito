#ifndef ARBOL_H
#define ARBOL_H
#include "Nodo.h"
#include <vector>
#include <string>

#include "mapeador.h"
using namespace std;

class Arbol: public Mapeador
{
private:
    vector<string> expresion;
    void borrar_ultimo();
    string ultimo();
    Nodo * raiz;

public:
    Arbol(vector<string>);
    Nodo * next(Nodo*);

    void crearArbol();
    double solve(double,double val2 = 0);


};

#endif // ARBOL_H
