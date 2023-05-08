//Lista 6 - Exercício 2
/*
 Faça um programa que imprima os 15 primeiros termos da série de Fibonacci.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i=1, z=0, y=1, x=0;
	while (i <= 15) {
		z = y + x;
		y = x;
		x = z;
		i++;
		printf ("%d ", z);
		}
	return 0;
}

