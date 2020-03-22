#pragma once
#include <string>

class atividadec {
public:
	atividadec(std::string);
	atividadec(int);
	void imprime();
private:
	int _i, _flag;
	std::string _a;
};