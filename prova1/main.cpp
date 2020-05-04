#include "vetorint.h"
#include "data.h"
#include <iostream>
using namespace std;

int main(){
    VetorInt v1(4),v2(4),escalar(4),soma(4),sub(4),v3(4);
    v1.setValor(0,2);
    v1.setValor(1,5);
    v1.setValor(2,8);
    v1.setValor(3,4);
    v3.setValor(0,2);
    v3.setValor(1,5);
    v3.setValor(2,8);
    v3.setValor(3,4);
    v2.setValor(0,8);
    v2.setValor(1,4);
    v2.setValor(2,2);
    v2.setValor(3,1);
    cout << "Vetores" << endl;
    cout << "V1 = ";
    v1.imprime();
    cout << "V2 = ";
    v2.imprime();
    cout << endl << "Soma" <<endl;
    cout << "V1 + V2 = ";
    soma = v1 + v2;
    soma.imprime();
    cout << endl << "Subtracao" <<endl;
    cout << "V1 - V2 = ";
    sub = v1 - v2;
    sub.imprime();
    cout << endl << "Produto Interno" << endl;
    cout << "V1 * V2 = " << v1*v2 << endl;
    cout << endl << "Multiplicacao por escalar" << endl;
    cout << "V1 * 4 = ";
    escalar = v1 * 4;
    escalar.imprime();
    cout << endl << "Soma" << endl;
    cout << "V2 += V1 = ";
    v2 += v1;
    v2.imprime();
    cout << endl << "Subtracao" << endl;
    cout << "V2 -= V2 = ";
    v2 -= v1;
    v2.imprime();
    cout << endl << "Multiplicacao por escalar" << endl;
    cout << "V2 * 4 = ";
    v2 *= 4;
    v2.imprime();
    cout << endl << "Teste de igualdade" << endl;
    if(v1==v3){
        v1.imprime();
        v3.imprime();
        cout << "sao iguais" << endl <<endl;
    }
    cout << endl << "Valor" << endl;
    v1.imprime();
    cout << "V1[1] = " << v1[1] << endl;
    cout << "V1(1) = " << v1(1) << endl << endl;
    Data tamanho1000[1000];
    cout << "Datas de Janeiro" << endl;
    for(int i = 1;i<32;i++){
        tamanho1000[i] = Data(i,1,2020);
        tamanho1000[i].imprime();
    }
    return 0;
}