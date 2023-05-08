/*
lista 10 - Exercício 1
 */


#include <stdio.h>
#include <string.h>

int main(){
	char str1[20], str2[20];
	printf("Digite seu nome: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1)-1]= '\0';
	printf("Digite seu sobrenome: ");
	fgets(str2, sizeof(str2), stdin);
	printf("\nAntes de concatenar: \n");
	printf("string 1: %s\n", str1);
	printf("string 2: %s", str2);
	strcat (str1, str2);
	printf("\nDepois de concatenar: \n");
	printf("string 1: %s", str1);
	printf("string 2: %s", str2);
return 0;
}
