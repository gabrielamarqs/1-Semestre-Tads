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

int main(int argc, char **argv)
{
	int id, i=0, med=0, soma=0, medh=0, me=0, ma=0;
	char gen;
	while (i < 10) {
		printf ("\nInforme o gênero da pessoa [M] para masculino [F] para feminino: ");
		scanf (" %c", &gen);
		gen = tolower (gen); 
		printf ("Informe a idade da pessoa: ");
		scanf ("%d", &id);
		if (i == 0) {
			ma = id;
			me = id;
		} else if (id > ma) {
			ma = id; 
		} else if (id < me) {
			me = id; }
		
 		if (gen == 'f') {
			soma = soma + id;
			med++;
			}
		else if (gen == 'm'){
			medh++;
			}
		else {
			printf ("\nEntrada inválida.\n");
			continue;
			}

		i++;
		}
		printf ("\nMédia de idade das mulheres = %.2f.\n", (float)soma/med);
		printf ("Quantidade de homens= %d\n", medh);
		printf ("A maior idade informada é %.0d e a menor idade informada é %.0d", ma, me);
	return 0;
}

