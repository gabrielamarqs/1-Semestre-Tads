// Lista 11 - Exercício Estrutura (Struct)

#include <stdio.h>
#define TAM 100
#include <stdio_ext.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv)
{
	struct TPessoa {
		int codigo, idade;
		char nome[100];
		char gen;
		float alt, peso;	
	};
	struct TPessoa cadastro[TAM];
	char opA, opB, opC, resp;
	int quant, i, cont, numC, numD, numE;
	
	printf ("\t\t\tCadastramento de clientes\n\n");
	do
	{
		printf ("Opções: \n");
		printf ("\na. Cadastramento: "); 
		printf ("\nb. Alterar os dados de um cadastro: "); 
		printf ("\nc. Excluir um cadastro: "); 
		printf ("\nd. Mostrar os dados de apenas um cadastro: ");
		printf ("\ne. Mostrar os dados de todos os cadastros: \n");
		scanf (" %c", &opA);
		opA = tolower (opA);

		switch (opA)
		{
			case 'a':
			printf ("\n\t---+----+---+---+---+---+---+---+---+---+---+---+---+---\n\n");
			printf ("a. Cadastramento: ");
			printf ("\n\nQuantidade de clientes a serem cadastrados: \n");
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
				printf ("Idade: ");
				scanf ("%d", &cadastro[i].idade);
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
			printf ("\nÉ necessário cadastrar todos os clientes antes de acessar as outras opções.");
			printf ("\n\n\t---+----+---+---+---+---+---+---+---+---+---+---+---+---\n\n");
			break;

			default:
			printf ("\nEntrada inválida!");
			printf ("\n\n\t---+----+---+---+---+---+---+---+---+---+---+---+---+---\n\n");
		}
	}
	while (opA != 'a');
	printf ("\n\n\t---+----+---+---+---+---+---+---+---+---+---+---+---+---\n");

	do 
	{
		printf ("\n\nOpções: \n");
		printf ("\na. Cadastramento: "); 
		printf ("\nb. Alterar os dados de um cadastro: "); 
		printf ("\nc. Excluir um cadastro: "); 
		printf ("\nd. Mostrar os dados de apenas um cadastro: ");
		printf ("\ne. Mostrar os dados de todos os cadastros: \n");
		scanf (" %c", &opB);
		opB = tolower (opB);
		printf ("\n\n\t---+----+---+---+---+---+---+---+---+---+---+---+---+---\n\n");
		switch (opB) 
		{			
			case 'a':
			printf ("\na. Cadastramento: "); 
			printf ("\nFunção indisponível.");
			break;
			
			case 'b':
			printf ("\nb. Alterar os dados de um cadastro: ");
			printf ("\nNúmero do cadastro do cliente que deseja modificar: \n");	
			scanf ("%d", &numE);	
			if (numE > quant || numE <= 0) {	
				printf ("\n\nNúmero de cadastro inexistente.");
			} else {	
				printf("\n\nCadastro número %d:", numE);				
				printf ("\nNome: %s", cadastro[numE-1].nome);
				if (cadastro[numE-1].gen == 'f') {
					printf ("\nGênero: Feminino");}
				else if (cadastro[numE-1].gen == 'm'){
					printf ("\nGênero: Masculino");}
				else if (cadastro[numE-1].gen == 0){
					printf ("\nGênero: 0");}
				else {
					printf ("\nEntrada inválida.");}	
				if (cadastro[numE-1].idade == 0){
					printf ("\nIdade: 0");}
				else {
					printf ("\nIdade: %d", cadastro[numE-1].idade);}
				if (cadastro[numE-1].alt == 0){
					printf ("\nAltura: 0");}
				else {
					printf ("\nAltura: %.2f", cadastro[numE-1].alt);}
				if (cadastro[numE-1].peso == 0){
					printf ("\nPeso: 0");}
				else {
					printf ("\nPeso: %.2f", cadastro[numE-1].peso);}				
					
				do {
					printf ("\n\nQuais dados deseja modificar?");
					printf ("\na. Nome:");
					printf ("\nb. Gênero:");
					printf ("\nc. Idade:");
					printf ("\nd. Altura:");
					printf ("\ne. Peso:\n");
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
								printf ("\nb. Gênero[F][M]: ");
								scanf (" %c", &cadastro[numE-1].gen);
								cadastro[numE-1].gen = tolower (cadastro[numE-1].gen);
								break;

							case 'c':
								printf ("\nc. Idade: ");
								scanf ("%d", &cadastro[numE-1].idade);
								break;

							case 'd':	
								printf ("\nd. Altura: ");
								scanf ("%f", &cadastro[numE-1].alt);
								break;
							
							case 'e':
								printf ("\ne. Peso: ");
								scanf ("%f", &cadastro[numE-1].peso);
								break;

							default:
							printf ("\nEntrada inválida!");
						}	
										
				printf("\n\nCadastro número %d:", numE);				
				printf ("\nNome: %s", cadastro[numE-1].nome);
				if (cadastro[numE-1].gen == 'f') {
					printf ("\nGênero: Feminino");}
				else if (cadastro[numE-1].gen == 'm'){
					printf ("\nGênero: Masculino");}
				else if (cadastro[numE-1].gen == 0){
					printf ("\nGênero: 0");}
				else {
					printf ("\nEntrada inválida.");}	
				if (cadastro[numE-1].idade == 0){
					printf ("\nIdade: 0");}
				else {
					printf ("\nIdade: %d", cadastro[numE-1].idade);}
				if (cadastro[numE-1].alt == 0){
					printf ("\nAltura: 0");}
				else {
					printf ("\nAltura: %.2f", cadastro[numE-1].alt);}
				if (cadastro[numE-1].peso == 0){
					printf ("\nPeso: 0");}
				else {
					printf ("\nPeso: %.2f", cadastro[numE-1].peso);}							

					printf ("\n\nDeseja modificar algo mais?");
					printf ("\nSe sim, digite [S], se não, digite [N]: \n");
					scanf (" %c", &resp);
					resp = tolower (resp);
					if (resp != 's' && resp != 'n'){
						printf ("\nEntrada inválida.");}
				} while (resp == 's');
			}
			break;
			
			case 'c':
			printf ("\nc. Excluir um cadastro: ");
			printf ("\nNúmero do cadastro do cliente que deseja excluir: \n");	
			scanf ("%d", &numD);
			if (numD > quant || numD <= 0){
				printf ("\n\nNúmero de cadastro inexistente.");
			} else {
				strcpy(cadastro[numD-1].nome, "0");
				cadastro[numD-1].gen = 0;
				cadastro[numD-1].idade = 0;
				cadastro[numD-1].alt = 0;
				cadastro[numD-1].peso = 0;
				printf ("\n\nCadastro número %d excluído.", numD);
			}
			break;

			case 'd':	
			printf ("\nd. Mostrar os dados de apenas um cadastro: ");	
			printf ("\nNúmero do cadastro do cliente que deseja visualizar: \n");	
			scanf ("%d", &numC);
				if (numC > quant || numC <= 0) {					
					printf ("\n\nNúmero de cadastro inexistente.");
				} else {
					printf ("\n\nNome: %s", cadastro[numC-1].nome);
					if (cadastro[numC-1].gen == 'f') {
						printf ("\nGênero: Feminino");}
					else if (cadastro[numC-1].gen == 'm'){
						printf ("\nGênero: Masculino");}
					else if (cadastro[numC-1].gen == 0){
						printf ("\nGênero: 0");}
					else {
						printf ("\nEntrada inválida.");}
					if (cadastro[numC-1].idade == 0) {
						printf ("\nIdade: 0");}
					else {
						printf ("\nIdade: %d", cadastro[numC-1].idade);}
					if (cadastro[numC-1].alt == 0) {
						printf ("\nAltura: 0");}
					else {
						printf ("\nAltura: %.2f", cadastro[numC-1].alt);}
					if (cadastro[numC-1].peso == 0) {
						printf ("\nPeso: 0");}
					else {
						printf ("\nPeso: %.2f", cadastro[numC-1].peso);}
				}

			break;

			case 'e':
			printf ("\ne. Mostrar os dados de todos os cadastros: ");
			printf ("\n\nQuantidade de clientes cadastrados: %d.", i);
			for (i=0; i<quant; i++) 
			{
				printf("\n\nCadastro número %d:", i+1);				
				printf ("\nNome: %s", cadastro[i].nome);
				if (cadastro[i].gen == 'f') {
					printf ("\nGênero: Feminino");}
				else if (cadastro[i].gen == 'm'){
					printf ("\nGênero: Masculino");}
				else if (cadastro[i].gen == 0){
					printf ("\nGênero: 0");}
				else {
					printf ("\nEntrada inválida.");}	
				if (cadastro[i].idade == 0){
					printf ("\nIdade: 0");}
				else {
					printf ("\nIdade: %d", cadastro[i].idade);}
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
		printf ("\n\n\nSe deseja fazer uma nova operação, digite 1, se não, digite 0.\n");
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

