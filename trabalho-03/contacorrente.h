#pragma once
#include "conta.h"

class ContaCorrente:public Conta{
public:
    using Conta::Conta;
    ContaCorrente() {
        _numero = 0;
        _cliente = NULL;
        _saldo = 0;
    }
    void extrato();
    void aplicaJurosDiarios(int);
};