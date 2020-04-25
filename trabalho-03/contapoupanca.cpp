#include "contapoupanca.h"
#include <iostream>
using namespace std;

void ContaPoupanca::extrato(){
    cout << "Saldo da Conta Poupanca = " << _saldo << endl;
}

void ContaPoupanca::aplicaJurosDiarios(int dias){
    _saldo += _saldo * dias * 0.0008;
}