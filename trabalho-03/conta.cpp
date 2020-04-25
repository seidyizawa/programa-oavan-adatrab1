#include "conta.h"
#include <iostream>
using namespace std;

void Conta::deposita(float valor){_saldo += valor;}

void Conta::retira(float valor){_saldo -= valor;}

void Conta::transfere(Conta contaDestino,float valor){_saldo -= valor; contaDestino.deposita(valor);}

void Conta::extrato(){
cout << "Extrato Conta Base = " << _saldo << endl;
}

void Conta::aplicaJurosDiarios(int dias) {
}