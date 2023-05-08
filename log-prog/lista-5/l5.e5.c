//Lista 5 - Exercício 5 
/*Faça um programa para mostrar todos os números de 1 até 10, junto de seus
quadrados e cubos.*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, vez1, vez2;
	i = 1;
	while (i <= 10){
		vez1 = i * i;
		vez2 = i * i * i;
		printf ("%d %d %d\n", i, vez1, vez2);
		i++;
	}
	return 0;
}

