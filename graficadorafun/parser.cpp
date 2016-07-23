#include "parser.h"

Parser::Parser(string t)
{
    this->texto = t;
}

vector<string> Parser::parsear() {
    vector <string> vec ;
    string temp = "";
 /*   for (string::iterator it = this->texto.begin(); it != this->texto.end(); ++it){

        if (*it != ' '){
            //cout << *it<<"/ \n ";
            temp += (*it);
            //cout << "TEmp: "<< temp;
            if(*it == this->texto.back()) vec.push_back(temp);
        }
        else{
            //cout << temp ;
            vec.push_back(temp);
            temp = "";

        }
    }
*/
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
