#include "atividadea.h"
#include "atividadeb.h"
#include "atividadec.h"
#include "atividaded.h"

int main()
{
	atividadea a(50);      //cria um objeto de acordo com a atividade A, tem como entrada um inteiro N, onde (3 >= N <= 10100)
	a.imprime();

	atividadeb b(5, 50);   //cria um objeto de acordo com a atividade B, tem como entrada dois inteiros h e p, 
	b.imprime();           //onde(1 <= h ,p <= 1000)

	atividadec c("0x2C");  // cria um objeto de acordo com a atividade C, onde a entrada pode ser ou um valor decimal
	c.imprime();           //nao negativo menor ou igual a 2**31 ou uma string contendo um numero hexa)

	atividaded d(10, 100); //cria um objeto de acordo com a atividade D, tem como entrada dois inteiros a e b,
	d.imprime();           //onde (a <= b <= 10100), o calculo demora um pouco
	return 0;
}