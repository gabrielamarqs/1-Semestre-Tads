//Lista 6 - Exercício 9



#include <stdio.h>
#include <ctype.h>


int main(int argc, char **argv)
{	
	int id, i=0, a=0, b=0, mi;
	char olcor, cabcor, gen;
	printf ("Pesquisa sobre características físicas de uma determinada região.\n");
	printf ("Questões:\n");
	printf ("Sexo: [F]eminino ou [M]asculino.\n");
	printf ("Cor dos olhos: [A]zuis, [V]erdes, [P]retos ou [C]astanhos.\n");
	printf ("Cor dos cabelos: [L]ouros, [P]retos ou [C]astanhos.\n");
	printf ("Idade.\n\n");
	
	while (i < 50) {
		printf ("\nInforme: sexo [F][M]: ");
		scanf (" %c", &gen);
		gen = tolower (gen); 
			if (gen != 'm' && gen != 'f'){
				printf ("\nEntrada inválida.\n");
				continue;}
				
		printf ("Informe sua idade: ");
		scanf (" %d", &id);
			if (i == 0) {
				mi = id;
			}  else if (id < mi) {
				mi = id; }
		
		printf ("Informe: cor dos olhos [A][V][P][C]: ");
		scanf (" %c", &olcor);
		olcor = tolower (olcor); 
			if (olcor != 'a' && olcor != 'v' && olcor != 'p' && olcor != 'c'){
				printf ("\nEntrada inválida.\n");
				continue;}

		printf ("Informe: cor dos cabelos [L][P][C]: ");
		scanf (" %c", &cabcor);
		cabcor = tolower (cabcor); 
			if (cabcor != 'l' && cabcor != 'p' && cabcor != 'c'){
				printf ("\nEntrada inválida.\n");
				continue;}
				
		switch (gen) {
			case 'f':
				if (id <=40) {
					if (cabcor == 'p' && olcor == 'p'){
						a++;}}
				break;
			case 'm':
				if (id >= 16 && id <= 24) {
					if (olcor == 'a' && cabcor == 'c'){
						b++;}}
				break;
			default:
			}
			

		i++;
	}
		printf ("\nA pessoa mais jovem tem %d anos.\n", mi);
		printf ("Pessoas do sexo feminino que tem os olhos e o cabelo da cor preta: %d.\n", a);
		printf ("Pessoas do sexo masculino que possuem os olhos da cor azul e o cabelo da cor castanha: %d.\n", b);
	return 0;
}

