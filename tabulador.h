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
public:
    Tabulador(string);
    vector<vector<double>> generarVector(double izq, double der,double dif);
    Arbol * arbol;
};

#endif // TABULADOR_H
