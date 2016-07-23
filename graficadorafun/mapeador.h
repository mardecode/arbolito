#ifndef MAPEADOR_H
#define MAPEADOR_H
#include "funciones.h"
#include <map>
#include <string>
using namespace std;
class Mapeador
{
public:
    Mapeador();
    map<string,double (*) (double , double)> mapita ;
    map<string,int> pesos ;

    bool is_operador(string);
};

#endif // MAPEADOR_H
