#include "categoria.h"
#include "categoriaDAO.h"
#include "data.h"
#include "periodo.h"
#include "periodoDAO.h"
#include "registro.h"
#include "RegistroDAO.h"
#include "ControllerCategoria.h"
#include "ControllerRegistro.h"
#include <iostream>
using namespace std;

/*
 * Método de Adicionar e Exportar - Desenvolvido por Igor
 * Método de Importar e Consultar - Desenvolvido por Edward 
 */

int main() {
	Registro::_AllRegistros.reserve(10000);
	ControllerRegistro registros;
	registros.executar();
	return 0;
}