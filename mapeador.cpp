#include "mapeador.h"

Mapeador::Mapeador()
{
    mapita["+"] = suma;
    mapita["-"] = resta;
    mapita["*"] = producto;
    mapita["/"] = division;
    mapita["^"] = potencia;

    unarios["sqrt"] = raizCuadrada;
    unarios["sin"] = seno;
    unarios["cos"] = coseno;
    unarios["tan"] = tangente;

    pesos["+"] = 1;
    pesos["-"] = 1;

    pesos["*"] = 2;
    pesos["/"] = 2;

    pesos["sin"] = 3;
    pesos["cos"] = 3;
    pesos["tan"] = 3;

    pesos["^"] = 4;
    pesos["sqrt"] = 4;



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
