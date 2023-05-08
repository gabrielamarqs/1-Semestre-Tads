//Lista 5 - Exercício 9
/*
Faça um programa para calcular e mostrar uma progressão Geométrica com 10 termos
e razão igual a -2, iniciando em -2.
Explicação: Uma Progressão Geométrica (PG) é uma sequência numérica em que
cada termo, a partir do segundo, é igual ao produto do termo anterior com uma
constante q (chamada razão).
Exemplo: P.G. (2,6,18,54,162,486,1458,4374,...) de razão q = 3 e termo inicial = 2
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 1, pg = 6;
	while(i <= 10)
	{
		printf ("6 x %d = %d\n", i, pg);
		pg = pg + 6;
		i = i + 1;
	}
	return 0;
}

