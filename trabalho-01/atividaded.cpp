#include <iostream>
using namespace std;
#include "atividaded.h"

atividaded::atividaded(int a, int b) {
	if (a <= b && b <= 10100) {
		_a = a;
		_b = b;
	}
	else {
		_a = 1;
		_b = 2;
		cerr << "Entrada invalida";
	}
}

void atividaded::imprime() {
	cout << "entrada " << _a << " " << _b << " saida " << calcula() << endl;
}

int atividaded::calcula() {
	int f1 = 0, f2 = 1, f3 = 3;
	int saida = 0;
	while (_a <= _b) {
		if (f1 <= _a) {
			saida++;
		}
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
	}
	return saida;
}//itera por todos os valores incrementando o contador saida caso ache um numero de fibonacci