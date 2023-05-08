/*
exercício 10 - exercício 6
*/

#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
	char str1[TAM], str2[TAM];
	int i, tam;
	printf("Digite uma frase: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1)-1]= '\0';
	tam = 0;
	for (i=strlen(str1)-1; i>=0; i--){
		str2[tam] = str1[i];
		tam++;}
    printf ("\n\nEssa frase ao contrário fica: [ %s ]", str2);

	return 0;
}
