//lista 6 - Exercício 5
/*
Faça um programa que leia um valor inteiro N (positivo ou negativo) enquanto o número esteja
no intervalo 0 <= N <= 10.
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	do {
		printf ("Informe um número: ");
		scanf ("%d", &num);
	} while (num >= 0 && num <= 10);
		printf ("Número fora do intervalo!");
		
	return 0;
}

