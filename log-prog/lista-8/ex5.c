/*
Lista 8 - Exercício 5
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int vetor1[100], i, numM=0, pos=0;
	for (i=0; i<20; i++)
	{
		printf ("Informe um número para a posição %d: ", i+1);
		scanf ("%d", &vetor1[i]);
		if (vetor1[i]>=0){
			continue;}
		else {
			printf ("\nInforme somente números positivos.\n");
			break;}
	}
	for (i=0; i<20; i++)
	{
		if (vetor1[i]>numM) 
		{
			numM=vetor1[i];
			pos=i;
		}
	}
		printf ("\nO maior número informado foi o %d e que se encontra na posição %d do vetor.", numM, pos+1);
	return 0;
}

