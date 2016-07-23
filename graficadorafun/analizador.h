#ifndef ANALIZADOR_H
#define ANALIZADOR_H

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

#include "mapeador.h"
using namespace std;

class Analizador:public Mapeador
{
private:
    vector<string> pila ;
    vector<string> expresion;
public:
    void print_vector(vector<string>,string);
    Analizador(vector<string>);
    vector<string> preorden();

};

#endif // ANALIZADOR_H
