#include "categoriaDAO.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iostream> 
#include <sstream> 
#include <vector>
#define ARQUIVO "categoria.txt"
using namespace std;

void CategoriaDAO::carregarCategorias() {
	ifstream myfile(ARQUIVO);
	string nomet, orcamentot;
	vector<string> nomes, orcamentos;

	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline(myfile, nomet, ',');
			nomes.push_back(nomet);
			getline(myfile, orcamentot);
			orcamentos.push_back(orcamentot);
		}
		for (int i = 0; i < nomes.size(); i++) {
			Categoria::listaCategorias.insert(Categoria(nomes[i], stof(orcamentos[i])));
		}
	}
	myfile.close();
}

/* void CategoriaDAO::adicionarCategoria(string categoria) {
	// abre arquivo  e escreve na ultima linha
	ofstream fout(ARQUIVO, ios::app);
	if (fout.is_open()) {
		// fazer a sobrecarga dos operadores de cin << para salvar o nome da categoria e o valor daquela categoria ?
		// o fout reconhece que a categoria tem alguns valores como nome e preco ?
		fout << categoria << "\n";
		fout.close();
	}
	else
		cout << "Nao foi possivel abrir o arquivo";

} */

void CategoriaDAO::salvaLista() {
	//abre o arquivo e sobreescreve com alista atual
	ofstream fout("TESTECAT.txt");
	set<Categoria>::iterator it;
	for (it = Categoria::listaCategorias.begin(); it!=prev(Categoria::listaCategorias.end()); ++it) {
		fout << it->getNome() << "," << it->getOrcamentoTotal() << endl;
	}
	fout << it->getNome() << "," << it->getOrcamentoTotal();
	fout.close();
}