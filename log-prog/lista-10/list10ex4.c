/*
lista 10 - exercício 3
 */

#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
	char str[TAM], ch;
	int tam=0, i;
	printf("Digite uma frase: ");
	fgets(str, sizeof(str), stdin);
	printf("Informe o caractere que você queira saber a quantidade: ");
	scanf ("%s", &ch);
	for (i = 0; str[i] != '\0'; i++) {
        if (ch == str[i])
            tam++;
    }
    printf ("\n\nEntrada: %s", str);
		if (tam>0){
		printf ("Saída: %d\n", tam);}
		else {
		printf ("Saída: %d.\nCaractere não encontrado.", tam);}

	return 0;
}

