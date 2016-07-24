#include "parser.h"

Parser::Parser(string t)
{
    this->texto = t;
}

vector<string> Parser::parsear() {
    vector <string> vec ;
    string temp = "";

    unsigned int cont = 0;
    for(auto it:this->texto){
        cont++;
        if(it != ' '){
            temp+=it;
            if(cont == this->texto.size()) vec.push_back(temp);
        }
        else{
            vec.push_back(temp);
            temp = "";
        }
    }
    return vec;
}
