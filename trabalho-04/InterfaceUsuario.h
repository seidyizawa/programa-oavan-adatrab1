#pragma once
#ifndef INTERFACEUSUARIO_H
#define INTERFACEUSUARIO_H
#include <stdlib.h>
using namespace std;

class InterfaceUsuario {
private:
public:
	InterfaceUsuario(){}
	int exibirMenu() {
		int opt;
		cout << "=== Interface Usuario - Menu ===" << endl;
		cout << endl;
		cout << "1) adicionar gastos" << endl;
		cout << "2) adicionar categorias" << endl;
		cout << "3) importar gastos" << endl;
		cout << "4) exportar gastos" << endl;
		cout << "5) consultar gastos" << endl;
		cout << "6) consultar categorias" << endl;
		cout << "7) adicionar orcamento mensal" << endl;
		cout << "8) verificar se uma categoria estourou" << endl;
		cout << "9) exporta as categorias/orcamentos" << endl;
		cout << "0) encerrar o programa" << endl;
		cin >> opt;
		cout <<flush;
		system("CLS");
		return opt;
	 }

	 void exibirCategorias();
	 void exibirGastos();

	 vector<std::string> adicionarGastosInterface() {
		 vector<string> buffer;
		 string data, hora, descricao, categoria, preco;
		 cout << "=== Interface Usuario - Adicionar Gastos ===" << endl;
		 cout << endl;
		 
		 cout << "Digite a data do gasto DD/MM/AAAA: " << endl;
		 cin >> data;
		 buffer.push_back(data);

		 cout << "Digite a hora do gasto HH:MM " << endl;
		 cin >> hora;
		 buffer.push_back(hora);

		 cout << "Digite a descricao do gasto: " << endl;
		 cin >> descricao;
		 buffer.push_back(descricao);

		 cout << "Digite a categoria do gasto: " << endl;
		 cin >> categoria;
		 buffer.push_back(categoria);

		 cout << "Digite o preco: " << endl;
		 cin >> preco;
		 buffer.push_back(preco);
		 cout << flush;
		 system("CLS");
		 return buffer;
	 }
	
	 float adicionarOrcamento() {
		 float orcamento;

		 cout << "=== Interface Usuario - Adicionar Orcamento ===" << endl;
		 cout << endl;
		 cout << "Digite o valor do orcamento" << endl;
		 cin >> orcamento;
		 cout << flush;
		 system("CLS");
		 return orcamento;
	 }

	 void consultarGastos();

	 int importarGastos() {
		 int mes;

		 cout << "=== Interface Usuario - Importar Gastos ===" << endl;
		 cout << endl;
		 cout << "Digite o mes que deseja fazer a importacao" << endl;
		 cin >> mes;
		 cout << flush;
		 system("CLS");
		 return mes;
	 }

	 int exportarGastos() {
		 int mes;

		 cout << "=== Interface Usuario - Exportar Gastos ===" << endl;
		 cout << endl;
		 cout << "Digite o mes que deseja fazer a exportacao" << endl;
		 cin >> mes;
		 cout << flush;
		 system("CLS");
		 return mes;
	 }

	 string adicionaOrcamentoCategoria() {
		 string temp;
		 cout << "== Interface Usuario - Adicionar Orcamento Categoria ===" << endl<<endl;
		 cout << "Digite a categoria que deseja fazer a importacao" << endl;
		 cin >> temp;
		 return temp;
	 }

	 string adicionarCategoria() {
		 string temp;
		 cout << "== Interface Usuario - Adicionar Categoria ===" << endl << endl;
		 cout << "Digite o nome da nova categoria" << endl;
		 cin >> temp;
		 return temp;
	 }

	 int verificaOrcamento() {
		 int temp;
		 cout << "== Interface Usuario - Verifica orcamentos estourados ===" << endl << endl;
		 cout << "Digite o mes a ser verificado" << endl;
		 cin >> temp;
		 return temp;
	 }
};

#endif // !INTERFACEUSUARIO_H

