//Lista 5 - Exercício 7
/*Faça um programa para calcular e mostrar uma Progressão Aritmética com 20 termos
e razão igual a 3, iniciando em zero.
Explicação: Uma Progressão Aritmética (PA) é uma sequência numérica em que cada
termo, a partir do segundo, é igual à soma do termo anterior com uma constante r
(chamada razão).
Exemplo: P.A. (0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,...) de razão r = 2 e termo
inicial = 0*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int n, var, i = 1, soma = 0;
	printf ("Escolha um número para iniciar a progressão aritmética:\n");
	scanf ("%d", &n);
	printf ("Agora escolha um número para ser a razão dessa progressão aritmética:\n");
	scanf ("%d", &var);
	soma = n;
	while(i < 20)
	{
		printf ("%d ", soma);
		soma = soma + var;
		i = i + 1;
	}
		printf ("%d", soma);
	return 0;
}

