#include <string>
#include <iostream>
#include <sstream>
using namespace std;

#include "atividadec.h"

atividadec::atividadec(int i) {
	if (i > 0) {
		_i = i;
		_flag = 0;
	}
	else {
		_flag = 2;
	}
	_o = i;
}

atividadec::atividadec(string a) {
	_a = a;
	_a.erase(_a.begin(), _a.begin() + 2);
	istringstream(_a) >> hex >> _i;
	_flag = 1;
}// apaga os dois primeiros digitos da string, o "0x" e converte para int

void atividadec::imprime() {
	switch (_flag) {
	case 0:
		cout << "entrada " << _o << endl << " saida ";
		cout << "0x" << hex << _i << endl; //converte o decimal para hex
		break;
	case 1:
		cout << "entrada " << "0x" << _a << " saida ";
		cout << dec << _i << endl; //converte o hexa para decimal
		break;
	case 2:
		break;
	}
}