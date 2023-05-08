

#include <stdio.h>

int main(int argc, char **argv)
{
	int v1, v2, x;
	printf ("Digite o valor de v1=");
	scanf ("%d", &v1);
	printf ("Digite o valor de v2=");
	scanf ("%d", &v2);
	printf ("O valor de v1 = %d\n e o valor de v2 = %d", v1, v2);
	x=v1;
	v1=v2;
	v2=x;
	printf ("\nAgora o valor de v1 = %d\n e o valor de v2 = %d", v2, v1);
	return 0;
}

