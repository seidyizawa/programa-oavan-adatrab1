#include "ControllerRegistro.h"
#include "RegistroDAO.h"
#include "periodoDAO.h"
#include "categoriaDAO.h"
#include <string>
#include <windows.h>
#include <iostream>

using namespace std;

ControllerRegistro::ControllerRegistro(){}

void ControllerRegistro::executar() {
	CategoriaDAO CDAO;
	CDAO.carregarCategorias();
	int opt = interfaceUsuario.exibirMenu();

	set<Categoria>::iterator it = Categoria::listaCategorias.begin();
	while (opt != 0) {
		
		switch (opt) {
			// adicionar gastos
		case 1:
			adicionarGastos(interfaceUsuario.adicionarGastosInterface());
			break;
			// adicionar categorias
			// esse método faz parte do ControllerCategoria
		case 2:
			adicionarCategoria(interfaceUsuario.adicionarCategoria());
			break;
			// importar gastos
		case 3:
			importarGastos(interfaceUsuario.importarGastos());
			break;
			// exportar gastos
		case 4:
			exportarGastos(interfaceUsuario.exportarGastos());
			break;
			// consultar gastos
		case 5:
			consultarGastos();
			break;
			// consultar categorias
		case 6:
			it->listarCategorias();
			break;
		case 7:
			adicionaOrcamentoMes(interfaceUsuario.adicionarOrcamento(),interfaceUsuario.adicionaOrcamentoCategoria());
			break;
		case 8:
			verificaOrcamentos(interfaceUsuario.verificaOrcamento());
		case 9:
			exportaCategoria();
		default:
			break;
		}

		opt = interfaceUsuario.exibirMenu();

	}
}

void ControllerRegistro::adicionarGastos(vector<string> gasto) {
	// chama o metodo adicionar do RegistroDAO.cpp
	registroDAO.adicionar(gasto);
}

void ControllerRegistro::consultarGastos() {

	if (Categoria::listaCategorias.size() > 0) {
		for (set<Categoria>::iterator it = Categoria::listaCategorias.begin(); it != Categoria::listaCategorias.end(); ++it) {
			cout << "Categoria :" << it->getNome() << ", Orcamento :" << it->getOrcamentoTotal() << endl;
			for (int i = 0; i < Registro::_AllRegistros.size(); i++) {
				if (Registro::_AllRegistros[i].getCategoria().getNome() == it->getNome()) {
					cout << Registro::_AllRegistros[i] << endl;
				}
			}
		}
		cout << endl << "Numero de CATEGORIAS: " << Categoria::listaCategorias.size() << endl;
		cout << "Numero de REGISTROS :" << Registro::_AllRegistros.size() << endl;
	}
	else {
		cout << "Nao existem registros" << endl;
	}
	
}

void ControllerRegistro::importarGastos(int mes) {
	registroDAO.importar(mes);
}

void ControllerRegistro::exportarGastos(int mes) {
	registroDAO.exportar(mes);
}

void ControllerRegistro::adicionaOrcamentoMes(float orcamento,string categoria) {
	registroDAO.orcamentoMes(orcamento,categoria);
}

void ControllerRegistro::adicionarCategoria(string categoria) {
	Categoria::listaCategorias.insert(Categoria(categoria));
}

void ControllerRegistro::verificaOrcamentos(int mes) {
	Periodo temp(Data(1,mes,1), Data(31,mes,9999));
	for (set<Categoria>::iterator it = Categoria::listaCategorias.begin(); it != Categoria::listaCategorias.end(); ++it) {
		float total = 0;
		for (int i = 0; i < temp._registros.size(); i++) {
			if (it->getNome() == temp._registros[i].getCategoria().getNome()) {
				total += temp._registros[i].getCusto();
			}
		}
		if (total > it->getOrcamentoTotal()) {
			cout << it->getNome() << " estourou o orcamento por " << total - it->getOrcamentoTotal()<<endl;
		}
	}
}

void ControllerRegistro::exportaCategoria() {
	CategoriaDAO CDAO;
	CDAO.salvaLista();
}