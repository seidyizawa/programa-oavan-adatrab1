#include "vetorint.h"
#include <iostream>

VetorInt::VetorInt():_tam(0),_vetor(NULL){}

VetorInt::VetorInt(int tam):_tam(tam){
    if(tam > 0){
       _vetor = new int[tam];
    }
    else {
       _vetor = NULL;
    }
}

VetorInt::~VetorInt(){
    _vetor = NULL;
    delete[] _vetor;
}

VetorInt VetorInt::operator+(const VetorInt &outro){
    if(_tam>outro._tam){
        VetorInt soma(_tam);
        for(int i = 0;i<_tam;i++){
            soma._vetor[i] = _vetor[i] + outro._vetor[i];
        }
        return soma;
    }else{
        VetorInt soma(outro._tam);
        for(int i = 0;i<outro._tam;i++){
            soma._vetor[i] = _vetor[i] + outro._vetor[i];
        }
        return soma;
    }
}

VetorInt VetorInt::operator-(const VetorInt &outro){
    if(_tam>outro._tam){
        VetorInt sub(_tam);
        for(int i = 0;i<_tam;i++){
            sub._vetor[i] = _vetor[i] - outro._vetor[i];
        }
        return sub;
    }else{
        VetorInt sub(outro._tam);
        for(int i = 0;i<outro._tam;i++){
            sub._vetor[i] = _vetor[i] - outro._vetor[i];
        }
        return sub;
    }
}

int VetorInt::operator*(const VetorInt &outro){
    int soma1 = 1; int soma2 = 1;
    for (int i = 0; i < _tam; i++) {
        soma1 *= _vetor[i];
    }
    for (int i = 0; i < outro._tam; i++) {
        soma2 *= outro._vetor[i];
    }
    return soma1 + soma2;
}

VetorInt VetorInt::operator*(float escalar){
    VetorInt aux(_tam);
    for(int i = 0;i < _tam;i++){
        aux._vetor[i] = _vetor[i]*escalar;
    }
    return aux;
}

void VetorInt::operator+=(const VetorInt &outro){
    for(int i = 0;i<_tam;i++){
        _vetor[i] = _vetor[i] + outro._vetor[i];
    }
}

void VetorInt::operator-=(const VetorInt &outro){
    for(int i = 0;i<_tam;i++){
        _vetor[i] = _vetor[i] - outro._vetor[i];
    }
}

void VetorInt::operator*=(float escalar){
    for(int i = 0;i < _tam;i++){
        _vetor[i] = _vetor[i]*escalar;
    }
}

bool VetorInt::operator==(const VetorInt& outro) {
    for (int i = 0; i < _tam; i++) {
        if (_vetor[i] != outro._vetor[i]) return false;
    }
    return true;
}

bool VetorInt::operator!=(const VetorInt& outro) {
    for (int i = 0; i < _tam; i++) {
        if (_vetor[i] == outro._vetor[i]) return false;
    }
    return true;
}


int VetorInt::operator[](int pos){return _vetor[pos];}

int VetorInt::operator()(int pos){return _vetor[pos];}

void VetorInt::setValor(int pos,int valor){_vetor[pos]=valor;}

void VetorInt::imprime(){
    for(int i = 0;i<_tam;i++){
        std::cout << _vetor[i] << ",";
    }
    std::cout << std::endl;
}
