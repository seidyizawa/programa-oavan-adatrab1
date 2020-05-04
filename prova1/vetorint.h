#pragma once
#include "imprimivel.h"

class VetorInt:public Imprimivel{
public:
	VetorInt(int);
	VetorInt();
	~VetorInt();
	VetorInt operator+(const VetorInt&);
	VetorInt operator-(const VetorInt&);
	int operator*(const VetorInt&);
	VetorInt operator*(float);
	void operator+=(const VetorInt&);
	void operator-=(const VetorInt&);
	void operator*=(float);
	bool operator==(const VetorInt&);
	bool operator!=(const VetorInt&);
	int operator[](int);
	int operator()(int);
	void imprime();
	void setValor(int,int);
protected:
	int *_vetor;
	int _tam;
};