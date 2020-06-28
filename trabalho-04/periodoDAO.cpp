#include "periodoDAO.h"
#define ARQUIVO "Periodo.txt"
#include <iostream>
#include <fstream>
#include <string>
#include <iostream> 
#include <sstream> 
#include <vector>
using namespace std;

void PeriodoDAO::exportar(Periodo Periodo){
    ofstream arquivo;
    arquivo.open(ARQUIVO, ios::out);
    if (arquivo.is_open()) {
        while (!arquivo.eof()) {
            for (int i = 0; i < Periodo._registros.size(); i++) {
                arquivo << Periodo._registros[i] << endl;
            }
        }
    }
    arquivo.close();
}