#include <stdio.h>
#include <math.h>

int main(){
	int x, quad, cub;
	printf ("Informe um valor x = ");
	scanf ("%d", &x);
	quad = pow (x , 2);
	cub = pow (x , 3);
	printf ("número \t quadrado \t cubo \n %d \t %d \t \t %d \t", x, quad, cub);
	return 0;
}

