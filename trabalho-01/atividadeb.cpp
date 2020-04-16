#include <iostream>;
#include "atividadeb.h"

atividadeb::atividadeb(int h, int p) {
	if (h >= 1 && p <= 1000) {
		_h = h;
		_p = p;
	}
};

void atividadeb::imprime() { std::cout.precision(2); std::cout << "entrada " << _h << " " << _p << " saida " << calcula() << std::endl; }

float atividadeb::calcula() { return float(_h / _p); }; //retorna o resultado como float