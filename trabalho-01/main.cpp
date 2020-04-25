#include "atividadea.h"
#include "atividadeb.h"
#include "atividadec.h"
#include "atividaded.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	char at_flag;
	int s, h, p, dec, da, db;
	string flagc, hexa, atc;
	string ishex = "0x";
	vector<atividaded> d1;
	bool flagd = true;
	int ma = 1;

	cout << "Escolha a atividade (a,b,c,d,e)" << endl;
	cin >> at_flag;
	switch (at_flag) {
	case 'a': {

		cout << "Digite um inteiro N, Onde (3 >= N <= 10100)" << endl;
		cin >> s;
		atividadea a(s); //cria um objeto de acordo com a atividade A, tem como entrada um inteiro N, onde (3 >= N <= 10100)
		a.imprime();
		break;
	}
	case 'b': {
		cout << "Digite um inteiro H, onde 1 <= H" << endl; //cria um objeto de acordo com a atividade B, tem como entrada dois inteiros h e p,
		cin >> h; //onde(1 <= h ,p <= 1000)
		cout << "Digite um inteiro P, onde P <= 1000" << endl;
		cin >> p;
		atividadeb b(h, p);
		b.imprime();
		break;
	}
	case 'c': {
		cout << "Digite o numero" << endl; // se int =
		cin >> atc;
		size_t found = atc.find(ishex);
		if (found != string::npos) {
			atividadec atc1(atc);
			atc1.imprime();
		}
		found = atc.find("-1");
		if (found != string::npos) {
			break;
		}
		int i = stoi(atc);
		atividadec atc2(i);
		atc2.imprime();
		atc.clear();
			break;
	}
	case 'd': {
		while (flagd == true) {
			cout << "Insira a, onde a <= b" << endl;
			cin >> da;
			cout << "Insira b, onde b <= 10100" << endl;
			cin >> db;
			if (da == 0 && db == 0) {
				break;
			}
			atividaded d(da, db); //cria um novo objeto
			d1.push_back(d);
			for (auto i = d1.begin(); i != d1.end(); ++i) {
				d.imprime();
			}
		}
		break; 
	}
	case 'e': {
		break;
	}
	default:
		cout << "Encerrou" << endl;
	}
	return 0;
}