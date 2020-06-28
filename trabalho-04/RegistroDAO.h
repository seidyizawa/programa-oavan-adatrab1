#pragma once
#include "Registro.h"
#include "periodo.h"
#include <vector>
using namespace std;

class RegistroDAO {
public:
	void importar(int mes);
	void exportar(int mes);
	void adicionar(vector<string> gasto);
	void orcamentoMes(float orcamento,string categoria);
	void consultar();
};