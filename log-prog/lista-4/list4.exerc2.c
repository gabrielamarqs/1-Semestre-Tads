
#include <stdio.h>

int main(int argc, char **argv)
{	
	int sem;
	printf ("Informe um número de 1 a 7, para saber o dia da semana correspondente:\n");
	scanf ("%d", &sem);
	switch (sem){
		case 1:
			printf ("Segunda-Feira");
			break;
		case 2:
			printf ("Terça-Feira");
			break;
		case 3:
			printf ("Quarta-Feira");
			break;
		case 4:
			printf ("Quinta-Feira");
			break;
		case 5:
			printf ("Sexta-Feira");
			break;
		case 6:
			printf ("Sábado");
			break;
		case 7:
			printf ("Domingo");
			break;
			
		default:
			printf ("Entrada inválida.");
	
	}
	
	return 0;
}

