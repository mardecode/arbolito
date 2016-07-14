#include "tabulador.h"

Tabulador::Tabulador(string ecuacion)
{
    Parser * p = new Parser(ecuacion);
    auto expresion = p->parsear();

    Analizador * a = new Analizador(expresion);
    cout << expresion.size() << endl;
    a->print_vector(expresion,"Inicio");
    auto preorden = a->preorden();

    this->arbol = new Arbol(preorden) ;
    this->arbol->crearArbol();
}

vector<vector<double>> Tabulador::generarVector(double izq, double der,double dif){
    vector<vector<double>> datos;
    for(izq;izq<=der;izq+=dif){
        //cout << this->arbol->solve(izq) << endl;

        vector<double> temp;
        temp.push_back(izq);
        temp.push_back(this->arbol->solve(izq));
        temp.push_back(0.0);

        datos.push_back(temp);
    }
    return datos;
}
