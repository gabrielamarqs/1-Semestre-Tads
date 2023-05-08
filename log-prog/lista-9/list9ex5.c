/*
lista 9 - exercício 5
 */


#include <stdio.h>
#define TAM 2
#include <ctype.h>


int main(int argc, char **argv)
{
	char letra;
	int mat[TAM][TAM];
	int i, j, soma=0, elem, find, l, c, cont;
		printf ("\t\tMatriz 5 x 5\n");
	for (i=0; i<TAM; i++)
	{
		for (j=0; j<TAM; j++)
		{
			printf ("Informe um número para a matriz [%d][%d]: ", i+1, j+1);
			scanf ("%d", &mat[i][j]);
		}
	}
	do {
	printf ("\n\n(a) Mostrar todos os elementos da matriz (na forma de uma matriz LxC): \n");
	printf ("(b) Mostrar todos os elementos da quarta linha da matriz e da primeira coluna da matriz: \n");
	printf ("(c) Mostrar a soma dos elementos da diagonal principal: \n");
	printf ("(d) Atribuir o valor 0 para os valores negativos encontrados fora da diagonal principal: \n");
	printf ("(e) Buscar um elemento na matriz. O programa deve ler um valor X e buscar esse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”: ");
	printf ("\nInforme a opção desejada: ");
	scanf (" %c", &letra);
	letra = tolower (letra);
	printf ("\n\t---+----+---+---+---+---+---+---+---+---+---+---+---+---");
	switch (letra) {
		case 'a':
			printf ("\n\n\tMatriz LxC\n");
			for (i=0; i<TAM; i++)
			{
				printf ("\n");
				for (j=0; j<TAM; j++)
				{
					printf ("[%d][%d] %d\t", i+1, j+1, mat[i][j]);
				}
			}
			break;
			
		case 'b':
			printf ("\n\nQuarta linha da matriz\n\n");
			for (j=0; j<TAM; j++)
			{
				printf ("[4][%d] %d\t", j+1, mat[3][j]);
			}
			printf ("\n\nPrimeira coluna da matriz\n\n");
			for (i=0; i<TAM; i++)
			{
				printf ("[%d][1] %d\n", i+1, mat[i][0]);
			}
			break;
		
		case 'c':
			printf ("\n\nElementos da diagonal principal: \n\n");
			for (i=0; i<TAM; i++)
			{
				for (j=0; j<TAM; j++)
				{
					if (i==j){
						printf ("[%d][%d] %d\t", i+1, j+1, mat[i][j]);
						soma = soma + mat[i][j];}
				}
			}
			printf ("\n\nA soma dos elementos da diagonal é: %d", soma);
			break;
				
		case 'd':
			printf ("\n\nMatriz: \n");
			printf ("Números negativos que não estão na diagonal principal serão igualados a 0.\n");
			for (i=0; i<TAM; i++)
			{
				for (j=0; j<TAM; j++)
				{
					if (mat[i][j]<0 && i!=j){
						mat[i][j]=0;}
				}
			}
				
			for (i=0; i<TAM; i++)
			{
				printf ("\n");
				for (j=0; j<TAM; j++)
				{
					printf ("[%d][%d] %d\t", i+1, j+1, mat[i][j]);
				}
			}
			break;
				
		case 'e':
			printf ("\n\nInforme o número que deseja procurar na matriz: ");
			scanf ("%d", &elem);
			for (i=0; i<TAM; i++)
			{
				for (j=0; j<TAM; j++)
				{
					if (elem == mat[i][j]){
						l = i;
						c = j;
						find = 1;}
				}
			}
			if (find == 1)
			{
				printf ("Elemento encontrado.\nElemento se encontra na linha [%d], coluna [%d]\tM[%d][%d].", l+1, c+1, l+1, c+1);
			}	
			else {
				printf ("Não encontrado.");}
			break;
			
			default:
				printf ("\n\nEntrada inválida");
		}
		printf ("\n\n\n\t---+----+---+---+---+---+---+---+---+---+---+---+---+---");
		printf ("\n\nSe deseja fazer uma nova pesquisa na matriz, digite 1, se não, digite 0.\n");
		scanf ("%d", &cont);
		printf ("\n");
			if (cont != 0 && cont != 1) {
				printf ("Entrada inválida");
				break;}
		printf ("\n\n\t---+----+---+---+---+---+---+---+---+---+---+---+---+---\n\n");
		} while (cont == 1);


	return 0;
}

