//Lista 6 - Exercício 6
/*
Faça um programa para ler duas notas A e B de um aluno, e calcular a média ponderada entre
estas notas (A tem peso 1 e B tem peso 2). Repetir este procedimento para uma turma composta
por um número variado de alunos. Ou seja, após calcular e imprimir a média de um aluno, exibir
uma mensagem perguntando ao usuário se existem mais alunos (resposta: s/n). Se tiver mais
alunos, continuar o procedimento de leitura das notas e o cálculo da média até que o usuárioresponda 'n'. Caso a resposta não seja s ou n, indicar ao usuário que a resposta dada está
incorreta e solicitar novamente para que ele responda a pergunta 'continuar (s/n)'. Repetir este
processo até que o usuário entre com uma resposta correta.
*/

#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	char resp;
	int not1, not2, i=1;
	printf ("\t\t\tMÉDIA DOS ALUNOS");
	do {
		printf ("\nAluno %d:\n", i);
		printf ("Informe a nota A do aluno %d: ", i);
		scanf ("%d", &not1);
		printf ("Informe a nota B do aluno %d: ", i);
		scanf ("%d", &not2);
		printf ("A média do aluno = %.1f\n", (float)(not1+not2)/2);
		printf ("\nTem mais alunos? [S] ou [N].\n");
		scanf (" %c", &resp);
		resp = tolower (resp); 
		i++;
		if (resp == 's') {
			continue;
		} else if (resp != 'n' && resp != 's') {
			printf ("\nResposta inválida.");
			do {
				printf ("Tem mais alunos?  [S] ou [N]");
				scanf (" %c", &resp);
				resp = tolower (resp); 
				if (resp == 's') {
				} else if (resp != 'n' && resp != 's') {
					printf ("ERRO: resposta inválida.");
					continue;}
				else {
					break;}
			} while (resp != 's');
		} else {
			break;}		
	} while (resp == 's');
	return 0;
}



