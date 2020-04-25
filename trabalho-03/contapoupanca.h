#pragma once
#include "conta.h"

class ContaPoupanca:public Conta {
public:
    using Conta::Conta;
    void extrato();
    void aplicaJurosDiarios(int);
};