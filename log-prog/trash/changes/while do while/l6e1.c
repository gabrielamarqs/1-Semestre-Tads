/*
Faça um programa que leia dois números inteiros, o primeiro é o valor inicial de um contador, e
o segundo é o valor final do contador (o valor inicial fornecido é inferior ao valor final). Usando o
comando while, escreva na tela uma contagem que comece no primeiro número lido, escreva os
números seguintes colocando apenas um número em cada nova linha da tela, até chegar ao valor
final indicado.
* 
* Lista 6 - Exerc 1 
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, i=1, soma;
	printf ("Entre com o número inicial da contagem: ");
	scanf ("%d", &a);
	printf ("Entre com o número final da contagem: ");
	scanf ("%d", &b);
	soma = a;
	i = a;	
	while (i <= b){
		printf ("%d\n", soma);
		soma = soma + 1;
		i++;
		}
	return 0;
}

