//Lista 6 - Exercicio 4
/*
Faça um programa que realize uma pesquisa de satisfação quanto a espectadores que
acabaram de assistir a um filme. A pesquisa deve solicitar a idade do espectador, se gostou do
filme, [S] ou [N], e se recomendaria o filme para colegas, [S] ou [N]. Ao final relacione o total de
espectadores, o total de votos e o total de recomendações. A condição de parada é que seja
digitado 0 (zero) para a idade do espectador.
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	int id, i=0, gc=0, recomc=0;
	char g, recom;
	while (id > 0) {
		printf ("Qual a sua idade? ");
		scanf ("%d", &id);
		
		if (id == 0){
			break;}
			
		printf ("Você gostou do filme? Responda com [S] ou [N].");
		scanf (" %c", &g);
		g = tolower (g); 
		printf ("Você gostou do filme? Responda com [S] ou [N].");
		scanf (" %c", &recom);
		recom = tolower (recom); 
		
		if (recom == 's'){
			recomc++; }
			
		if (g == 's') {
			gc++; }	

		i++;
	}
	printf ("Quantidade de espectadores %d.\n", i);
	printf ("Quantidade de pessoas que gostaram do filme %d.\n", gc);
	printf ("Quantidade de recomendações %d.", recomc);

	return 0;
}

