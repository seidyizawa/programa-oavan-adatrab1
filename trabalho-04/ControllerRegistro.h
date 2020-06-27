#ifndef CONTROLLERREGISTRO_H
#define CONTROLLERREGISTRO_H

#include "registro.h"
#include "RegistroDAO.h"
#include "periodo.h"
#include "InterfaceUsuario.h"

class ControllerRegistro {
private:
	RegistroDAO registroDAO;
	InterfaceUsuario interfaceUsuario;
public:
	ControllerRegistro();

	void executar();

	void adicionarGastos(vector<string> gasto);
	void consultarGastos();
	void importarGastos(int mes);
	void exportarGastos(int mes);
	void adicionaOrcamentoMes(float orcamento,string categoria);
	void adicionarCategoria(string categoria);
	void verificaOrcamentos(int mes);
	void exportaCategoria();
};

#endif // !CONTROLLERREGISTRO_H

