#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace  std;
class Parser
{
public:
    Parser(string);
    string texto;
    vector<string> parsear();

    char suma = '+';
    char resta ='-';
    char multi = '*';
    char divi = '/';
    char poten = '^';
    char dere = ')';
    char izq = '(';


};

#endif // PARSER_H
