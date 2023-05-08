//Lista 5 - Exercício 2 
/*Faça um programa para mostrar todos os números de 15 até 0 (na ordem
decrescente).*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	i = 15;
	while (i >= 0) 
	{
		printf ("%d\n", i);
		i--;
	}
	
	return 0;
}

