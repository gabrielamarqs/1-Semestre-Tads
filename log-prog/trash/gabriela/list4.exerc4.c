#include <stdio.h>

int main(int argc, char **argv)
{
	int mes, ano;
	printf ("Informe um número de 1 a 12 (de acordo com os meses do ano), para saber a quantidade de dias que tem no mês respectivo:\n");
	scanf ("%d", &mes);
	switch (mes) {
		case 2:
			printf ("Informe o ano:\n");
			scanf ("%d", &ano);
			if ( ano%4 != 0 )
				printf ("Como não é um ano bissexto, o mês tem 28 dias.");
			else 
				printf ("Como é um ano bissexto, o mês tem 29 dias.");
		break;
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf ("Esse mês tem 31 dias.");
		break;
			
		case 4:
		case 6:
		case 9:
		case 11:
			printf ("Esse mês tem 30 dias.");
		break;
		
		default:
			printf ("Entrada inválida.");
	}
	return 0;
}

