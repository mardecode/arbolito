#ifndef ANALIZADOR_H
#define ANALIZADOR_H
#include <string>
#include <vector>
using namespace std;

class Analizador
{
private:
    vector<string> pila ;
    vector<string> expresion;
public:
    Analizador(vector<string>);
    //vector<string> preorden();0
};

#endif // ANALIZADOR_H
