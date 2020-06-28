#pragma once
#include "data.h"
#include "registro.h"
#include <vector>
using namespace std;

class Periodo{
private:
	Data _data_inicial;
	Data _data_final;
	float _total = 0.00;
public:
	Periodo(Data inicial, Data final);
	float getTotal(){return _total;};
	vector<Registro> _registros;
};