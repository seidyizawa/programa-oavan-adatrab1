#include <string>
#include <vector>
#include <iostream>


#include "ControllerCategoria.h"
#include "categoriaDAO.h"

// mesmo principio do executar do ControllerRegistro.cpp
// de acordo com o menu do interface, define os metodos que serão chamados aqui
void ControllerCategoria::executar() {
}

void ControllerCategoria::adicionarCategoria(string categoria) {
	//categoriaDAO.adicionarCategoria(categoria);
}
void ControllerCategoria::carregarCategoriasController() {
	//categoriaDAO.carregarCategorias();
}

void ControllerCategoria::salvarCategorias() {
	cout << "Salvando lista ordenada no arquivo" << endl;
	categoriaDAO.salvaLista();
}