/*
lista 10 - exercício 2
 */


/*
lista 10 - Exercício 1
 */


#include <stdio.h>
#include <string.h>

int main(){
	char str1[20], str2[20], str3[20];
	int t1, t2, t3;
	printf("Digite seu nome: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1)-1]= ' ';
	printf("Digite seu sobrenome: ");
	fgets(str2, sizeof(str2), stdin);
	printf("\nAntes de concatenar: \n");
	printf("String 1: %s\n", str1);
	printf("String 2: %s", str2);
	strcat (str3, str1);
	strcat (str3, str2);
	t1 = strlen(str1);
	t2 = strlen(str2);
	t3 = strlen(str3);
	printf("\nDepois de concatenar: \n");
	printf("String 1: %s\n", str1);
	printf("String 2: %s", str2);
	printf("String 3: %s", str3);
	printf("\nTamnhos: %d %d %d", t1-1, t2-1, t3-1);

return 0;
}


