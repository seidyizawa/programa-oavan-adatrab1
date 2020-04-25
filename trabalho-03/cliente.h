#pragma once
#include <string>

class Cliente{
public:
Cliente(std::string);
void setNome(std::string);
std::string getNome(){return _nome;};
private:
std::string _nome;
};