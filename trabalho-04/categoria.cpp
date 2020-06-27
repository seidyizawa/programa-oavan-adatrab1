#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <set>
#include <assert.h>
#include "categoria.h"
set<Categoria> Categoria::listaCategorias;
using namespace std;

Categoria::Categoria(string nome) : _nome(nome), _orcamentoTotal(0.0),_gastoAtual(0){
}

Categoria::Categoria(string nome, float orcamento) : _nome(nome), _orcamentoTotal(orcamento),_gastoAtual(0){
}

string Categoria::getNome() const {
	return _nome;
}

float Categoria::getOrcamentoTotal() const {
	return _orcamentoTotal;
}

void Categoria::setOrcamento(float orcamento) {
	_orcamentoTotal = orcamento;
}

void Categoria::listarCategorias() const {
	cout << "***************************************" << endl;
	cout << "Printando agora da lista de Categorias" << endl;
	if (listaCategorias.size() > 0) {
		cout << "Quantidade de Categorias :" << listaCategorias.size() << endl;
	}
	else {
		cout << "Zero Categorias" << endl;
	}

	for (set<Categoria>::iterator it = listaCategorias.begin(); it != listaCategorias.end(); ++it) {
		cout << it->getNome() << ", " << it->getOrcamentoTotal() << endl;
	}
}

bool Categoria::verificarOrcamento() {
    return _orcamentoTotal < _gastoAtual;
}

void Categoria::acrescentaValor(float custo) {
    _gastoAtual += custo;
}

float Categoria::consultaEstouro() {
    return _gastoAtual - _orcamentoTotal;
}

float Categoria::consultaRestante(){
	return _orcamentoTotal - _gastoAtual;
}