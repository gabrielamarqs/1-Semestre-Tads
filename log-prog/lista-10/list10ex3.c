/*
lista 10 - exercício 3
 */

#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
	char str[TAM];
	int tam=0, i;
	printf("Digite uma frase: ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; str[i] != '\0'; i++) {
        if ('a' == str[i])
            tam++;
    }
    printf ("Entrada: %s", str);
    printf ("Saída: %d\n", tam);

	return 0;
}

