#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <string>
#include <set>

using namespace std;
class Categoria {
private:
	string _nome;
	float _orcamentoTotal;
	float _gastoAtual;
public:
	Categoria(string nome);
	Categoria(string nome, float orcamento);
	string getNome() const;
	float getOrcamentoTotal() const;
	void listarCategorias() const;
	void setOrcamento(float orcamento);
	bool verificarOrcamento();
	void acrescentaValor(float valor);
	float consultaEstouro();
	float consultaRestante();
	static set<Categoria> listaCategorias;
	friend bool operator<(Categoria a,Categoria b) {if(a.getNome()<b.getNome())return true;else return false;};
};
#endif // CATEGORIA_H