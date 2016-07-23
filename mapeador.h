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
    map<string,double (*) (double , double)> unarios ;

    map<string,int> pesos ;

    bool is_operador(string);
    bool is_unario(string);
    bool is_binario(string);

};

#endif // MAPEADOR_H
