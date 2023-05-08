#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	char resp;
	printf ("Informe seu estado civil (solteiro, casado, divorciado ou viúvo): ");
	scanf ("%c", &resp);
	resp = tolower(resp);
	if (resp == 's')
		printf ("Solteiro.\n");
	else
		if (resp == 'c')
			printf ("Casado.\n");
		else
			if (resp == 'd')
				printf ("Divorciado.\n");
			else
				if (resp == 'v')
					printf ("Viúvo.\n");
				else
	return 0;
}

