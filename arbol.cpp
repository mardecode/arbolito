#include "Arbol.h"

Arbol::Arbol(vector<string> e)
{
    this->expresion = e;
}
void Arbol::borrar_ultimo(){
    this->expresion.pop_back();
}

string Arbol::ultimo(){
    return this->expresion.back();
}

Nodo * Arbol::next(Nodo * n){
    if(this->is_operador(ultimo())){
        n = new Nodo(this->mapita[ultimo()]);
        borrar_ultimo();

        Nodo * hijo1;
        n->hijo1 = next(hijo1);

        Nodo * hijo2;
        n->hijo2 = next(hijo2);

        return n;
    }
    else{
        if(ultimo() != "x"){
            double val = stod(ultimo());
            n = new Nodo(val);
        }
        else{
           n = new Nodo(true);
        }
        borrar_ultimo();
        return n;
    }
}

void Arbol::crearArbol(){

    this->raiz = Arbol::next(this->raiz);
}
double Arbol::solve(double val){
    return this->raiz->resolver(val);
}

