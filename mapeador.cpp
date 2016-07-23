#include "mapeador.h"

Mapeador::Mapeador()
{
    mapita["+"] = suma;
    mapita["*"] = producto;
    mapita["/"] = division;
    mapita["^"] = potencia;

    unarios["sin"] = seno;

    pesos["+"] = 1;
    pesos["*"] = 2;
    pesos["/"] = 2;
    pesos["^"] = 3;

    pesos["sin"] = 2;



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

bool Mapeador::is_binario(string s){
    auto it =  mapita.find(s) ;
    if ( it == mapita.end()){
        return false;
    }
    else{
        return true;
    }
}

bool Mapeador::is_unario(string s){
    auto it =  unarios.find(s) ;
    if ( it ==unarios.end()){
        return false;
    }
    else{
        return true;
    }
}
