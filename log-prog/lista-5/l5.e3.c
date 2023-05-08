//Lista 5 - Exercício 3
/*3) Faça um programa que some os números ímpares entre 0 e 100.*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 1, soma = 0;
	while (i <= 100)
	{
	printf ("%d + ", i);
	soma = soma + i;
	i = i + 2;
	}
	printf ("= %d", soma);
	return 0;
}

