/*
 lista 8 - exerc 1 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float notasA[5], notasB[5];
	int i;
	for (i=0; i<5; i++)
	{
		printf ("Informe 5 números: ");
		scanf ("%f", &notasA[i]);
	}
		for (i=0; i<5; i++)
	{
		notasB[i] = notasA[i]*2;
		printf ("Notas: %.0f.\n", notasB[i]);

	}
	return 0;
}

