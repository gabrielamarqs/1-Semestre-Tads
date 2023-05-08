/*
Lista 8 - Exercício 8
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int vetorA[100], vetorB[100], i;
	for (i=0; i<10; i++)
	{
		printf ("Informe 10 números: ");
		scanf ("%d", &vetorA[i]);
	}
		printf ("Na ordem contrária fica: ");
	for (i=9; i>=0; i--)
	{
		vetorB[i]=vetorA[i];
		printf ("%d ", vetorB[i]);
	}
	return 0;
}

