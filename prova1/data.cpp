#include "data.h"
#include <iostream>
using namespace std;

Data::Data() :VetorInt(3) {}

Data::Data(int dia,int mes,int ano):VetorInt(3){
_vetor[0] = dia;
_vetor[1] = mes;
_vetor[2] = ano;
}

Data Data::operator+(const Data &outro){
    Data aux;
    aux._vetor[0] = _vetor[0] + outro._vetor[0];
    aux._vetor[1] = _vetor[1] + outro._vetor[1];
    aux._vetor[2] = _vetor[2] + outro._vetor[2];
    if(validaData(aux._vetor[0],aux._vetor[1],aux._vetor[3])){
        return aux;
    }
    else{
        cerr << "DATA INVALIDA";
        aux._vetor[0] = 0;
        aux._vetor[1] = 0;
        aux._vetor[2] = 0;
        return aux;
    }
}

Data Data::operator-(const Data &outro){
    Data aux;
    aux._vetor[0] = _vetor[0] - outro._vetor[0];
    aux._vetor[1] = _vetor[1] - outro._vetor[1];
    aux._vetor[2] = _vetor[2] - outro._vetor[2];
    if(validaData(aux._vetor[0],aux._vetor[1],aux._vetor[3])){
        return aux;
    }
    else{
        cerr << "DATA INVALIDA";
        aux._vetor[0] = 0;
        aux._vetor[1] = 0;
        aux._vetor[2] = 0;
        return aux;
    }
}

void Data::operator+=(const Data &outro){
    int d1,d2,d3;
    d1 = _vetor[0] + outro._vetor[0];
    d2 = _vetor[1] + outro._vetor[1];
    d3 = _vetor[2] + outro._vetor[2];
    if(validaData(d1,d2,d3)){
        _vetor[0] = _vetor[0] + outro._vetor[0];
        _vetor[1] = _vetor[1] + outro._vetor[1];
        _vetor[2] = _vetor[2] + outro._vetor[2];
    }else{
        cerr << "Data invalida";
    }
}

void Data::operator-=(const Data &outro){
    int d1,d2,d3;
    d1 = _vetor[0] - outro._vetor[0];
    d2 = _vetor[1] - outro._vetor[1];
    d3 = _vetor[2] - outro._vetor[2];
    if(validaData(d1,d2,d3)){
        _vetor[0] = _vetor[0] - outro._vetor[0];
        _vetor[1] = _vetor[1] - outro._vetor[1];
        _vetor[2] = _vetor[2] - outro._vetor[2];
    }else{
        cerr << "Data invalida";
    }
}

bool Data::operator==(const Data &outro){
    return (_vetor[0]==outro._vetor[0]&&_vetor[1]==outro._vetor[1]&&_vetor[2]==outro._vetor[2]);
}

bool Data::operator!=(const Data &outro){
    return (_vetor[0]!=outro._vetor[0]||_vetor[1]!=outro._vetor[1]||_vetor[2]!=outro._vetor[2]);
}

int Data::operator()(int pos){return _vetor[pos];}

int Data::operator[](int pos){return _vetor[pos];}

bool Data::validaData(int dia,int mes,int ano){
    int dia_mes[] = {31,0,31,31,30,31,31,30,31,30,31};
    if(mes == 2){
        if(Bissexto(ano)){
            dia_mes[2] = 29;
        }
        else{
            dia_mes[2] = 28;
        }
    }
    if(dia > 0 && dia < dia_mes[mes] && mes > 0 && mes < 12){
        return true;
    }
    return false;
}

bool Data::Bissexto(int ano){
    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
        return true; 
  }
  else {
        return false;
  }
}

void Data::imprime(){cout << _vetor[0] << "/" << _vetor[1] << "/" << _vetor[2] << endl;}
