#include <stdio.h>

int main(int argc, char **argv)
{
	int mes;
	printf ("Informe um número de 1 a 12, de acordo com os meses do ano, para saber a qual trimestre esse mês pertence:\n");
	scanf ("%d", &mes);
	switch (mes) {
		case 1:
		case 2:
		case 3:
			printf ("Este mês pertence ao 1o. trimestre");
			break;
		case 4:
		case 5:
		case 6:
			printf ("Este mês pertence ao 2o. trimestre");
			break;
		case 7:
		case 8:
		case 9:
			printf ("Este mês pertence ao 3o. trimestre");
			break;
		case 10:
		case 11:
		case 12:
			printf ("Este mês pertence ao 1o. trimestre");
			break;
			
	default:
		printf ("Entrada inválida.");
		}
	return 0;
}

