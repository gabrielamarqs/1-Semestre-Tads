/*
lista 8 - ex 2
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float vetorB[10];
	int i, vetorA[10];
	for (i=0; i<10; i++)
	{
		printf ("Informe 10 números: ");
		scanf ("%d", &vetorA[i]);
	}
		for (i=0; i<10; i++)
	{
		if (vetorA[i] % 2 == 0){
			vetorB[i] = vetorA[i] * 5;}
		else {
			vetorB[i] = vetorA[i] + 5;}
		
		printf ("Resultado final: %.0f\n", vetorB[i]);
	}
	return 0;
}

