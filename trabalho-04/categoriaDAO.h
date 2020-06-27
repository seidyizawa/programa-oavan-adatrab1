#ifndef CATEGORIADAO_H
#define CATEGORIADAO_H

#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "categoria.h"

using namespace std;
class CategoriaDAO{
public:
	void carregarCategorias();
	void salvaLista();
};

#endif // CATEGORIADAO_H
