#pragma once
#include "vetorint.h"

class Data:private VetorInt{
public:
    Data();
    Data(int,int,int);
    Data operator+(const Data&);
    Data operator-(const Data&);
    void operator+=(const Data&);
    void operator-=(const Data&);
    bool operator==(const Data&);
    bool operator!=(const Data&);
    int operator[](int);
    int operator()(int);
    bool validaData(int,int,int);
    bool Bissexto(int);
    void imprime();
};