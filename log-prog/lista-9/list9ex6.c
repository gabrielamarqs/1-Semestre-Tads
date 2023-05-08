/*
Faça um programa para calcular e apresentar a média geral de uma turma de n alunos. 
A média a ser obtida deve ser a média geral de cada aluno durante o ano letivo das quatro notas.
*/


#include <stdio.h>
#define TAM 100

int main(int argc, char **argv)
{
	int i, j, n; 
	float media[TAM], notas[TAM][TAM], soma=0;
	printf ("Programa para calcular médias: ");
	printf ("\n\nQuantidade de alunos na turma: ");
	scanf ("%d", &n);
	for (i=0; i<n; i++)
	{
		printf ("\n\nALUNO %d.\n", i+1);
		media[i] = 0;
		for (j=0; j<4; j++)
		{
			printf ("NOTA %d: ", j+1);
			scanf ("%f", &notas[i][j]);
			media[i] += notas[i][j];
		}
		media[i] = media[i]/4;

	}
	printf ("\n\nALUNO\tNOTA 1\tNOTA 2\tNOTA 3\tNOTA 4\tMEDIA");
	for (i=0; i<n; i++)
	{
		printf ("\n  %d \t %.2f \t %.2f \t %.2f \t %.2f \t%.2f",i+1, notas[i][0], notas[i][1], notas[i][2], notas[i][3], media[i]);
		soma = soma + media[i];
	}
	printf ("\n\n...........................MEDIA GERAL: %.2f\n", soma/n);
	return 0;
}

