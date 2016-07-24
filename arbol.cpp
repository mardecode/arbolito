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
        if (is_binario(ultimo())){
            n = new Nodo(this->mapita[ultimo()]);
            borrar_ultimo();

            Nodo * hijo1;
            n->hijo1 = next(hijo1);

            Nodo * hijo2;
            n->hijo2 = next(hijo2);
        }else{
            n = new Nodo(this->unarios[ultimo()],true);
            borrar_ultimo();

            Nodo * hijo1;
            n->hijo1 = next(hijo1);
        }

        return n;
    }
    else{
        if(ultimo() == "x"){

            n = new Nodo(true,false,false);

        }
        else if (ultimo() == "-x"){
            n = new Nodo(true,false,true);
        }
        else if (ultimo() == "y"){
            n = new Nodo(false,true,false);
        }
        else if (ultimo() == "y"){
            n = new Nodo(false,true,true);
        }
        else{
           double val = stod(ultimo());
            n = new Nodo(val);
        }
        borrar_ultimo();
        return n;
    }
}

void Arbol::crearArbol(){

    this->raiz = Arbol::next(this->raiz);


}
double Arbol::solve(double val, double val2){
    return this->raiz->resolver(val, val2);
}

