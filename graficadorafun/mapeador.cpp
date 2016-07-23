#include "mapeador.h"

Mapeador::Mapeador()
{
    mapita["+"] = &suma;
    mapita["*"] = &producto;
    mapita["/"] = &division;
    mapita["^"] = &potencia;
    mapita["-"] = &resta;
    mapita["sqrt"] = &raizcuadrada;
    mapita["sin"] = &seno;
    mapita["cos"] = &coseno;
    mapita["tan"] = &tangente;
    mapita["log"] = &logaritmo;

    pesos["+"] = 1;
    pesos["-"] = 1;
    pesos["*"] = 2;
    pesos["/"] = 2;
    pesos["sqrt"] = 3;
    pesos["^"] = 3;
    pesos["sin"] = 4;
    pesos["cos"] = 4;
    pesos["tan"] = 4;
    pesos["log"] = 4;


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
