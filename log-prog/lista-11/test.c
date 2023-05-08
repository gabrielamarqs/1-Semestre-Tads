/*
 */


#include <stdio.h>
#define TAM 100
#include <stdio_ext.h>
#include <ctype.h>
#include <string.h>




int main(int argc, char **argv)
{
	struct TPessoa {
		int codigo;
		char nome[100];
		char gen;
		float alt, peso;	
	};
	struct TPessoa cadastro[TAM];
	char opA, opB, opC, resp;
	int quant, i, cont, numC, numD, numE;
	
	
	do
	{
		printf ("Opções: \n");
		printf ("\na. Cadastro de uma pessoa: "); 
		printf ("\nb. Alterar os dados de uma pessoa: "); 
		printf ("\nc. Excluir uma pessoa: "); 
		printf ("\nd. Mostrar os dados de apenas uma pessoa: ");
		printf ("\ne. Mostrar os dados de todos os cadastros: \n\t");
		scanf (" %c", &opA);
		opA = tolower (opA);

		switch (opA)
		{
			case 'a':
			printf ("a. Cadastro de uma pessoa: "); 
			printf ("\n\nQuantidade de pessoas a serem cadastradas: ");
			scanf ("%d", &quant);
			
			for (i=0; i<quant; i++){
				cadastro[i].codigo = i+1;
				printf("\nCadastro número %d:", i+1);
				printf("\nNome: ");
				__fpurge(stdin);		
				fgets(cadastro[i].nome, 100, stdin);
				cadastro[i].nome[strlen(cadastro[i].nome)-1]= '\0';
				printf ("Gênero[F][M]: ");
				scanf (" %c", &cadastro[i].gen);
				cadastro[i].gen = tolower (cadastro[i].gen);

				printf ("Altura: ");
				scanf ("%f", &cadastro[i].alt);
				printf ("Peso: ");
				scanf ("%f", &cadastro[i].peso);
			}
			break;
				
			case 'b':
			case 'c':
			case 'd':	
			case 'e':
			break;

			default:
		}
	}
	while (opA != 'a');

	do 
	{
		printf ("\n\nOpções: \n");
		printf ("\na. Cadastro de uma pessoa: "); 
		printf ("\nb. Alterar os dados de uma pessoa: "); 
		printf ("\nc. Excluir uma pessoa: ");
		printf ("\nd. Mostrar os dados de apenas uma pessoa: ");
		printf ("\ne. Mostrar os dados de todos os cadastros: ");
		scanf (" %c", &opB);
		opB = tolower (opB);
		switch (opB) 
		{			
			case 'a':
			printf ("\na. Cadastro de uma pessoa: "); //vai precisar de um contador
			break;
			
			case 'b':
			printf ("\nb. Alterar os dados de uma pessoa: ");
			printf ("\nNúmero do cadastro do cliente que deseja modificar: ");	
			scanf ("%d", &numE);	
			do {
				printf ("\nQuais dados deseja modificar?");
				printf ("\na. Nome:");
				printf ("\nb. Gênero:");
				printf ("\nc. Idade:");
				printf ("\nd. Peso:");
				scanf (" %c", &opC);
				opC = tolower (opC);

					switch (opC)
					{

						case 'a':
							printf ("\na. Nome: ");
							__fpurge(stdin);		
							fgets(cadastro[numE-1].nome, 100, stdin);
							cadastro[numE-1].nome[strlen(cadastro[numE-1].nome)-1]= '\0';
						break;
							
						case 'b':
							printf ("b. Gênero[F][M]: ");
							scanf (" %c", &cadastro[numE-1].gen);
							cadastro[numE-1].gen = tolower (cadastro[numE-1].gen);
							break;

						case 'c':
							printf ("c. Altura: ");
							scanf ("%f", &cadastro[numE-1].alt);
							break;

						case 'd':	
							printf ("d. Peso: ");
							scanf ("%f", &cadastro[numE-1].peso);
							break;

						default:
						printf ("Entrada inválida!");
					}
				
				printf ("Deseja modificar algo mais?");
				printf ("Se sim, digite [S], se não, digite [N]: ");
				scanf (" %c", &resp);
				resp = tolower (resp);

			} while (resp == 's');
			break;
			
			case 'c':
			printf ("\nc. Excluir uma pessoa: ");
			printf ("\nNúmero do cadastro do cliente que deseja excluir: \n\t");	
			scanf ("%d", &numD);
			strcpy(cadastro[numD-1].nome, "0");
			cadastro[numD-1].gen = 0;
			cadastro[numD-1].alt = 0;
			cadastro[numD-1].peso = 0;
			printf ("\n\nCadastro número %d excluído.", numD);

			break;

			case 'd':	
			printf ("\nd. Mostrar os dados de apenas uma pessoa: ");	
			printf ("\nNúmero do cadastro do cliente que deseja visualizar: \n\t");	
			scanf ("%d", &numC);
			printf ("\n\nNome: %s", cadastro[numC-1].nome);
				if (cadastro[numC-1].gen == 'f') {
					printf ("\nGênero: Feminino");}
				else if (cadastro[numC-1].gen == 'm'){
					printf ("\nGênero: Masculino");}
				else if (cadastro[numC-1].gen == 0){
					printf ("\nGênero: 0");}
				else {
					printf ("\nEntrada inválida.");}
				if (cadastro[numC-1].alt == 0) {
					printf ("\nAltura: 0");}
				else {
					printf ("\nAltura: %.2f", cadastro[numC-1].alt);}
				if (cadastro[numC-1].peso == 0) {
					printf ("\nPeso: 0");}
				else {
					printf ("\nPeso: %.2f", cadastro[numC-1].peso);}
			break;

			case 'e':
			printf ("\ne. Mostrar os dados de todos os cadastros: ");
			for (i=0; i<quant; i++) 
			{
				printf ("\n\nNome: %s", cadastro[i].nome);
				if (cadastro[i].gen == 'f') {
					printf ("\nGênero: Feminino");}
				else if (cadastro[i].gen == 'm'){
					printf ("\nGênero: Masculino");}
				else if (cadastro[i].gen == 0){
					printf ("\nGênero: 0");}
				else {
					printf ("\nEntrada inválida.");}		
				if (cadastro[i].alt == 0){
					printf ("\nAltura: 0");}
				else {
					printf ("\nAltura: %.2f", cadastro[i].alt);}
				if (cadastro[i].peso == 0){
					printf ("\nPeso: 0");}
				else {
					printf ("\nPeso: %.2f", cadastro[i].peso);}				
			}
			break;

			default:
			printf ("Entrada inválida!");
		}
		
		printf ("\n\n\n\t---+----+---+---+---+---+---+---+---+---+---+---+---+---");
		printf ("\n\nSe deseja fazer uma nova operação, digite 1, se não, digite 0.\n");
		scanf ("%d", &cont);
		printf ("\n");
			if (cont != 0 && cont != 1) {
				printf ("Entrada inválida");
				break;}
		printf ("\n\n\t---+----+---+---+---+---+---+---+---+---+---+---+---+---\n\n");
	} 
	while (cont == 1);


	
	
	return 0;
}

