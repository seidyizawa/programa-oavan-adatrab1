#include "cliente.h"
#include <string>
using namespace std;

Cliente::Cliente(string nome):_nome(nome){}
void Cliente::setNome(string nome)
{
    _nome = nome;
}