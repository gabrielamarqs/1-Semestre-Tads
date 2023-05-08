#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	char cat;
	printf ("Categoria : Carteira de Motorista\n");
	printf ("Informe a categoria da sua carteira de motorista:\n");
	printf ("Opções [A],[B],[C],[D] e [E]:\n");

	scanf ("%c", &cat);
	cat = tolower (cat);
	switch (cat) {
		case 'a':
			printf ("Categoria A: Moto");
			break;
		
		case 'b':
			printf ("Categoria B: Carro");
			break;
	
		case 'c':
			printf ("Categoria C: Caminhão");
			break;
			
		case 'd':
			printf ("Categoria D: Ônibus");
			break;
			
		case 'e':
			printf ("Categoria E: Carreta");
			break;

			
		default:
			printf ("Entrada inválida");
	}
	
	return 0;
}

