#include <iostream>
using namespace std;
#include "atividadea.h"

atividadea::atividadea(int boca) {
		if (boca >= 3 && boca <= 10100) {
			_boca = boca;
		}
		else {
			_boca = 3;
			cerr << "Entrada invalida";
		}
	}

void atividadea::imprime() { cout << "entrada " << _boca << " saida " << calcula() <<std::endl; }

int	atividadea::calcula() { return _boca % 3; } // retorna o resto da divisão por 3