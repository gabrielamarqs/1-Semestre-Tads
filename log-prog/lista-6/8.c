// Lista 6 - Exercício 8
/*
Para um grupo indeterminado de pessoas descobrir:
O mais gordo
​
O mais magro
​
A mulher mais nova
​
O homem mais velho
​
Utilize a opção de solicitar ao usuário se deseja ler os dados de mais uma pessoa para continuar
o programa.
 * */


#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{	int id=0, peso=0, mp=0, ml=0, i=0, mn, mv=0;
	char gen, resp;
	do {
		printf ("\nInforme seu gênero: ");
		scanf (" %c", &gen);
		gen = tolower (gen);
		printf ("Qual a sua idade? ");
		scanf ("%d", &id);
		printf ("Qual seu peso? ");
		scanf ("%d", &peso);
		printf ("\nPara informar mais dados aperte na letra [C].\nPara parar o programa digite a letra [P].\n");
		scanf (" %c", &resp);
		resp = tolower (resp);
		
		if (i == 0){
			ml = peso;
			mp = peso;
		} else if (peso < ml){
			ml = peso; 
		} else if (peso > mp){
			mp = peso; }
		
		if (gen == 'f') {
			if (i == 0){
				mn = id;
			} else if (id < mn){
				mn = id; 
			}
		} else if (gen == 'm') {
			if (i == 0){
				mv = id;
			} else if (id > mv){
				mv = id; 
			}
		} else {
			printf ("\nEntrada inválida.\n");
			break; }	
			
		if (resp != 'c' && resp != 'p'){
			do 
			{
			printf ("\nPara informar mais dados aperte na letra [C].\nPara parar o programa digite a letra [P].\n");
			scanf (" %c", &resp);
			resp = tolower (resp);
			} while (resp != 'c' && resp != 'p');
			}

		
		i++;	
	} while (resp != 'p');
		printf ("O mais pesado, pesa: %d Kg.\n", mp);
		printf ("O mais leve, pesa: %d Kg.\n", ml);
		printf ("O homem mais velho tem %d anos.\n", mv);
		printf ("A mulher mais nova tem %d anos.", mn);		
		
	return 0;
}

