/*
exercício 10 - exercício 6
*/

#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
	char str1[TAM], str2[TAM];
	int result;
	printf("Digite uma frase: ");
	fgets(str1, sizeof(str1), stdin);
	printf("Digite uma segunda frase: ");
	fgets(str2, sizeof(str2), stdin);
	result = strcmp(str1,str2);
    printf ("resultado = %d.\n", result);

	return 0;
}
