#include "mapeador.h"

Mapeador::Mapeador()
{
    mapita["+"] = suma;
    mapita["*"] = producto;
    mapita["/"] = division;
    mapita["^"] = potencia;
    mapita["sin"] = seno;

    pesos["+"] = 1;
    pesos["*"] = 2;
    pesos["/"] = 2;
    pesos["sin"] = 2;
    pesos["^"] = 3;




}

bool Mapeador::is_operador(string s){

    auto it =  pesos.find(s) ;
    if ( it == pesos.end()){
        return false;
    }
    else{
        return true;
    }
}
