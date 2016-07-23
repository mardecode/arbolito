#include "analizador.h"

Analizador::Analizador(vector<string> e)
{
    reverse(e.begin(), e.end());
    //cout << "reverse ";
    //print_vector(e,"oie");
    this->expresion = e;
}
void Analizador::print_vector(vector<string> vec,string name){
    cout << name << ":  ";
    for(auto i:vec){
        cout << i << ", ";
    }
    cout << endl;

}

vector<string> Analizador::postorden(){

   vector<string> resultado;
   vector<string> pila;

   bool error = false;

   while(!expresion.empty() and !error ){
       auto e = expresion.back();
       //cout << e << ",";
       if(e=="("){
           cout << "parentesis (";
           pila.push_back(e);
           expresion.pop_back();
           print_vector(pila,"pila: ");
           print_vector(resultado,"resp: ");
       }
       else if(e==")"){
           cout << "parentesis )"<<endl;
           while(!pila.empty()){

               if (pila.back() == "("){
                    pila.pop_back();
                    error = false;
               }
               else{
                   resultado.push_back(pila.back());
                   pila.pop_back();
                   error = true;

               }
           }
           expresion.pop_back();
           print_vector(pila,"pila: ");
           print_vector(resultado,"resp: ");
       }
       else if(is_operador(e)){
           cout << "operador : " << e << endl;
           while(!pila.empty() and (pesos[pila.back()]>=pesos[e])){
               resultado.push_back(pila.back());
               pila.pop_back();

           }
           pila.push_back(expresion.back());
           expresion.pop_back();
           print_vector(pila,"pila: ");
           print_vector(resultado,"resp: ");
       }
       else{
           //numero o var
            cout << "num o var: " << e << endl;
           resultado.push_back(e);
           expresion.pop_back();
           print_vector(pila,"pila: ");
           print_vector(resultado,"resp: ");
       }
   }

   while(!pila.empty()){
       resultado.push_back(pila.back());
       pila.pop_back();
       print_vector(pila,"pila: ");
       print_vector(resultado,"resp: ");
   }
   print_vector(pila,"pila: ");
   print_vector(resultado,"resp: ");
    return resultado;
}
