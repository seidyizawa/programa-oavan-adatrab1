#pragma once
#include "cliente.h"
#include <string>
#include <iostream>
using namespace std;

class Conta{
public:
    Conta(int numero, Cliente* cliente) :_numero(numero), _cliente(cliente) {
        _saldo = 0;
        cout << "Criando conta " << _numero << " do cliente " << cliente->getNome() << endl;
    }
    Conta(){
            _numero = 0;
            _cliente = NULL;
            _saldo = 0;
    };
void deposita(float);
void retira(float);
void transfere(Conta, float);
void extrato();
virtual void aplicaJurosDiarios(int);
int _numero,_saldo;
Cliente* _cliente;
};
