//Lista 5 - Exercício 6 
/*Faça um programa para ler 15 números e calcular apenas a média dos números
maiores que 10.*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int n, i = 1, soma = 0, cont = 0;
	while(i <= 15)
	{
		printf ("Digite 15 números aleatórios: ");	
		scanf ("%d", &n);
		if (n >= 10) {
		soma = soma + n;
		cont++;
		} 
		i++;
	}
		printf ("%.2f", (float)soma/cont);
	return 0;
}

