#include "RegistroDAO.h"
#include "CategoriaDAO.h"
#include "categoria.h"
#include "registro.h"
#include "Data.h"
#include <iterator>
#include <iostream>
#include <fstream>
#include <string>
#include <iostream> 
#include <sstream> 
#include <vector>

using namespace std;

// Método responsável por adicionar os gastos individuualmente
void RegistroDAO::adicionar(vector<string> gasto) {
	vector<string> datas, horas, descricaos, categorias, precos;

	datas.push_back(gasto[0]);
	horas.push_back(gasto[1]);
	descricaos.push_back(gasto[2]);
	categorias.push_back(gasto[3]);
	precos.push_back(gasto[4]);

	if (gasto.size() > 0) {
		string diat, mest, anot;
		for (int i = 0; i < precos.size(); i++) {
			istringstream data_s(datas[i]);
			getline(data_s, diat, '/');
			getline(data_s, mest, '/');
			getline(data_s, anot);
			
			Registro::_AllRegistros.push_back(Registro(Data(stoi(diat), stoi(mest), stoi(anot)), horas[i], descricaos[i], categorias[i], stoi(precos[i])));
			cout << Registro::_AllRegistros[i] << endl;
		}
		cout << "Custo adicionado com sucesso" << endl;
	}
	else {
		cout << "Nao foi possivel adicionar os gastos, dados invalidos." << endl;
	}
}

// Método Responsável por consultar os gastos do vector<Registro> onde fica listado todos os registros adicionado
// Longo do programa
void RegistroDAO::consultar() {
	
	if (Registro::_AllRegistros.size() > 0) {
		cout << Registro::_AllRegistros.size() << endl;
		for (int i = 0; i < Registro::_AllRegistros.size(); i++) {
			cout << Registro::_AllRegistros[i] << endl;
		}
	}
	else {
		cout << "Nao existem registros" << endl;
	}
	
}

// Método responsável por fazer a importação dos registros em um arquivo tipo texto, o mesmo salva os registros no vector<Registro>
void RegistroDAO::importar(int mes) {
	string datat, horat, descricaot, categoriat, precot;
	vector<string> datas, horas, descricaos, categorias, precos;
	ifstream myfile("registro.txt", ios::in);
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline(myfile, datat, ',');
			datas.push_back(datat);
			getline(myfile, horat, ',');
			horas.push_back(horat);
			getline(myfile, descricaot, ',');
			descricaos.push_back(descricaot);
			getline(myfile, categoriat, ',');
			categorias.push_back(categoriat);
			getline(myfile, precot);
			precos.push_back(precot);
		}
		myfile.close();
	}
	else cout << "Falha na importação do arquivo";

	string diat, mest, anot; set<Categoria>::iterator it;
	for (int i = 0; i < precos.size(); i++) {
		istringstream data_s(datas[i]);
		getline(data_s, diat, '/');
		getline(data_s, mest, '/');
		getline(data_s, anot);
		it = Categoria::listaCategorias.find(categorias[i]);
		if (stoi(mest) == mes) {
			Registro::_AllRegistros.push_back(Registro(Data(stoi(diat), stoi(mest), stoi(anot)), horas[i], descricaos[i], *it, stoi(precos[i])));
		}
	}
}
	// Método responsável por exportar todos os registros do programa e jogar e um arquivo texto
    void RegistroDAO::exportar(int mes){
        ofstream arquivo("registro.txt");
		if (Registro::_AllRegistros.size() > 0) {
			int i;
			for (i = 0; i < Registro::_AllRegistros.size() - 1; i++) {
				arquivo << Registro::_AllRegistros[i] << endl;
			}
			arquivo << Registro::_AllRegistros.back();
			cout << "Exportacao dos gastos realizada com sucesso" << endl;
		}
		else {
			cout << "Nao foi possivel retornar os gastos de acordo com os dados passados." << endl;
		}
        arquivo.close();
    }

	// método responsável por incrementar o orcamento mensal a categoria
	void RegistroDAO::orcamentoMes(float orcamento,string categoria) {
		for (auto it : Categoria::listaCategorias) {
			if (it.getNome() == categoria) {
				Categoria::listaCategorias.erase(it);
				Categoria::listaCategorias.insert(Categoria(categoria, orcamento));
			}
		}
	}