#ifndef TABULADOR_H
#define TABULADOR_H

#include <string>
#include <vector>

#include "parser.h"
#include "analizador.h"
#include "Arbol.h"

using namespace  std;

class Tabulador
{
private:
    bool dosd = false;
    bool tresd = false;
    string ecuacion;
public:
    Tabulador(string);
    vector<vector<double>> generarVector(double izqX, double derX,double izqY, double derY, double dif);
    void buscarVar(string);

    int dimX;
    int dimY;
    Arbol * arbol;
};

#endif // TABULADOR_H
