#include "parser.h"

Parser::Parser(string t)
{
    this->texto = t;
}

vector<string> Parser::parsear() {
    vector <string> vec ;
    char temporal;
    string t="";
    int tams=this->texto.size();//tamaño del texto

    for(int i=0;i<tams;i++){
        t=t+texto[i];
        if (texto[i+1]==suma or texto[i+1]==resta or texto[i+1]==multi or texto[i+1]==divi or texto[i+1]==dere or texto[i+1]==izq){
            vec.push_back(t);
            t="";
        }
        else if (texto[i]==suma or texto[i]==resta or texto[i]==multi or texto[i]==divi or texto[i]==dere or texto[i]==izq){
            vec.push_back(t);
            t="";
        }
        else if (i==tams-1){
            vec.push_back(t);
            t="";
        }

    }
    return vec;
}
