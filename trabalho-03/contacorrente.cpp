#include "contacorrente.h"
#include <iostream>

void ContaCorrente::extrato(){
cout << "Saldo Conta Corrente: " << _saldo << std::endl;
}

void ContaCorrente::aplicaJurosDiarios(int dias){
	_saldo += _saldo * dias * 0.0001;
}