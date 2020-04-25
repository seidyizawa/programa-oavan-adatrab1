#pragma once
#include <string>

class atividadec {
public:
	atividadec(std::string);
	atividadec(int);
	void imprime();
private:
	int _i, _flag,_o;
	std::string _a;
};