#include "analizador.h"

Analizador::Analizador(vector<string> e)
{
    this->expresion = e;
}
void Analizador::print_vector(vector<string> vec,string name){
    cout << name << ":  ";
    for(auto i:vec){
        cout << i << ", ";
    }
    cout << endl;

}

vector<string> Analizador::preorden(){

    vector<string> resultado;
    for(auto i:this->expresion){

        if(i=="("){
            this->pila.push_back(i);
            //cout << "here1" ;

        }
        else if(i==")"){
            //this->pila.push_back(i);
            resultado.push_back(this->pila.back());
            this->pila.pop_back();
            this->pila.pop_back();
            //cout << "here2" ;

        }
        else if(this->is_operador(i)){
            cout << "operator " << i <<this->pila.size() << endl;

            if(this->pila.size() == 0) {
                cout << "vaci " << i <<endl;
                this->pila.push_back(i);
            }
            else{
                auto s_pre = this->pila.back();
                cout << "que fue"<<endl;
                int pre = this->pesos[s_pre] ;
                cout << "pes "<< s_pre <<pre << endl;
                int next = this->pesos[i];


                if (pre == next){
                    auto temp = s_pre;
                    s_pre = i;
                    i = temp;
                }
                else if (next>pre){
                    this->pila.push_back(i);
                }
                else{
                    reverse(this->pila.begin(),this->pila.end());
                    for(auto op:this->pila){
                        resultado.push_back(op);
                    }
                    this->pila.clear();
                    this->pila.push_back(i);
                }

            }
            //cout << "here3" ;
        }
        else{
            resultado.push_back(i);
        }

        if(i==this->expresion.back()){
            reverse(this->pila.begin(),this->pila.end());
            for(auto op:this->pila){
                resultado.push_back(op);
            }
            this->pila.clear();
        }
        this->print_vector(this->pila,"Pila");
        this->print_vector(resultado,"REs");
        cout << endl;
    }
    //reverse(resultado.begin(),resultado.end());
    return resultado;

}
