// Lista 6 - Exercício 7


#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	int i=0, b=0, c=0, a=0, d=0;
	char resp1, resp2;
	printf ("Pesquisa sobre torcidas no Paraná.\n");
	printf ("Para qual time você torce?.\nDe acordo com as opções a seguir:\n");
	printf ("Opções:\n\tAtlético\n\tCoritiba\n\tFoz\n");
	do {
		printf ("\nInforme a inicial do time para que torce:\n[A]:Atĺético\n[C]:Coritiba\n[F]:Foz\n");
		scanf (" %c", &resp1);
		resp1 = tolower (resp1); 
		if (resp1 == 'a') {
			a++;
		} else if (resp1 == 'c') {
			b++;
		} else if (resp1 == 'f') {
			c++;
		} else {
			printf ("Entrada inválida.\n");
			d++;
		}
		printf ("\nPara encerrar o programa digite [S] de sair.\nDigite outra letra para continuar.\n\t");
		scanf (" %c", &resp2);
		resp2 = tolower (resp2); 
		i++;
	} while (resp2 != 's');
		printf ("\n\nQuantidade de torcedores:\n");
		printf ("Atlético: %d\nCoritiba: %d\nFoz: %d\n", a, b, c);
		printf ("Porcentagem das torcidas individuais em relação ao total:\n");
		printf ("Quantidade total de respostas: %d\n", i);
		printf ("Entradas inválidas: %d\n", d);
		printf ("Atlético: %.2f porcento.\n", (float)a*100/i);
		printf ("Coritiba: %.2f porcento.\n", (float)b*100/i);
		printf ("Foz: %.2f porcento.", (float)c*100/i);

	return 0;
}

