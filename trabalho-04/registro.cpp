#include <string>
#include "registro.h"
#include "categoria.h"
#include <vector>
using namespace std;
vector<Registro> Registro::_AllRegistros;
int Registro::_qtd = 0;

Registro::Registro(Data data, string hora, string descricao, Categoria categoria, float preco): _data(data), _hora(hora), _descricao(descricao), _categoria(categoria), _valor(preco),_cod(++_qtd){
    categoria.acrescentaValor(preco);
    if (categoria.verificarOrcamento()){
        _ultrapassou = true;
    }else{
        _ultrapassou = false;
    }
}