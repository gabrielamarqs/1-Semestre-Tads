//Lista 6 - Exercício 3
/*
Faça um programa para ler a idade e o gênero (F/M) de 10 pessoas. Calcule e mostre:
- A maior e a menor idade do grupo;
- A média de idade das mulheres;
- O número de homens.
 */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void flush_in() { 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}
//problema do código: HAY MTOS PROBLEMAS 
int main(int argc, char **argv)
{
	int id, i=1, med=0, soma=0, medh=0, me, ma;
	char gen;
	while (i <= 2) {
		printf ("Informe a idade da pessoa: ");
		scanf ("%d", &id);
		printf ("Informe o gênero da pessoa [M] para masculino [F] para feminino: ");
		scanf ("%c", &gen);
		flush_in(); 
		gen = tolower (gen); 
		if (id > ma) {
			ma = id; }
		if (id < me) {
			me = id; }
 		if (gen == 'f') {
			soma = soma + id;
			med++;
			}
		else if (gen == 'm'){
			medh++;
			}
		else {
			printf ("Entrada inválida.");
			}

		i++;
		}
		printf ("Média de idade das mulheres = %.0f.\n", (float)soma/med);
		printf ("Quantidade de homens= %d\n", medh);
		printf ("A maior idade informada é %.0d e a menor idade informada é %.0d", ma, me);
	return 0;
}

