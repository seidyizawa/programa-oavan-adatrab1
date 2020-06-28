#ifndef REGISTRO_H
#define REGISTRO_H

using namespace std;

#include <string>
#include <iostream>
#include "data.h"
#include "categoria.h"


class Registro {
private:
	int _cod;
	Data _data;
	string _hora;
	string _descricao;
	Categoria _categoria;
	float _valor;
	bool _ultrapassou;
	static int _qtd;
public:

	static vector<Registro> _AllRegistros;
	friend istream& operator>>(istream& is, Registro& registro);
	friend ostream& operator<<(ostream& os, Registro& registro);

	Registro(Data data, string hora, string descricao, Categoria categoria, float preco);

	int getMes() {
		return _data.getMes();
	}
	Categoria getCategoria() const {
		return _categoria;
	}

	float getCusto(){
		return _valor;
	}

	Data getData() {
		return _data;
	}
};

inline istream& operator>>(istream& is, Registro& registro) {
	char sep;
	string cat_temp;
	cat_temp = registro._categoria.getNome();
	is >> registro._data >> sep >> registro._hora >> sep >> registro._descricao >> sep >> cat_temp >> sep >> registro._valor;
	return is;
}

inline ostream& operator<<(ostream& os, Registro& registro) {
	os << setfill('0') << setw(2) << registro._data.getDia() << "/";
	os << setfill('0') << setw(2) << registro._data.getMes() << "/" << registro._data.getAno();
	os << "," << registro._hora << "," << registro._descricao << "," << registro._categoria.getNome() << "," << registro._valor;
	return os;
}

#endif // !REGISTRO_H

