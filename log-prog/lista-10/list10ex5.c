/*
exercício 10 - exercício 5
*/

#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
	char str[TAM];
	int i;
	printf("Digite uma frase: ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str)-1]= '\0';
	for (i=0; str[i]!='\0'; i++){
		if (str[i] >= 'a' && str[i] <= 'z')
		{str[i] = str[i] - 32; }
	}
    printf ("\n\nEssa frase em letra maiúscula fica: [ %s ]", str);

	return 0;
}

