//Lista 6 - Exercício 6


#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	char resp;
	int not1, not2, i=1;
	do {
		printf ("Aluno %d:\n", i);
		printf ("Informe a nota A do aluno %d: ", i);
		scanf ("%d", &not1);
		printf ("Informe a nota B do aluno %d: ", i);
		scanf ("%d", &not2);
		printf ("A média do aluno: %.1f\n", (float)(not1+not2)/2);
		printf ("Continuar? [S] ou [N].\n");
		scanf (" %c", &resp);
		resp = tolower (resp); 
		i++;
		if (resp == 's') {
			continue;
		} else if (resp == 'n') {
			break;
		} else {
			printf ("Resposta inválida.");}		
	} while (resp == 's');
	return 0;
}

//comentário: testei sem o break e o continue e também da certo.

