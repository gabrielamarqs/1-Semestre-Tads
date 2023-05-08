/*
 * l7e1.c
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	for (i = 32; i<=126; i++)
	{
		printf ("%3d - > %c -> %2X\n", i, i, i);
	}
	return 0;
}

