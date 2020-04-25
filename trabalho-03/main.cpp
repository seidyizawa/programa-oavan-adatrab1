#include "conta.h"
#include "cliente.h"
#include "contapoupanca.h"
#include "contacorrente.h"


int main(){
	Cliente cl1("joao"),cl2("Jose"),cl3("Fulano"),cl4("Josias");
	ContaCorrente c1(2131,&cl1),c2(4141,&cl2);
	ContaPoupanca p1(3211, &cl3), p2(5611, &cl4);
    p1.extrato();
    p1.deposita(2000);
    p1.extrato();
    p1.retira(300);
    p1.extrato();
    p1.transfere(c1, 1000);
    p1.extrato();
    c1.extrato();
    p2.deposita(1000);
    c2.deposita(1000);
    p2.extrato();
    c2.extrato();
    p2.aplicaJurosDiarios(100);
    c2.aplicaJurosDiarios(100);
    p2.extrato();
    c2.extrato();
    ContaCorrente vetor1[100]; // Etapa 5, foi necessário adicionar um contrutor default a classe ContaCorrente e um construtor default a classe Conta
    Conta vetor2[100]; //Etapa 6, nao foi necessario adicionar nenhum passo adicional
    return 0;
}
