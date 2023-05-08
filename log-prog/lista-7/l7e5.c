/*
 * l7e5.c
 * 
 * Copyright 2022 Gabriela Marques <gabrielamarques@gabrielamarques-Aspire-A515-54>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int numI, numF, i, nip, npa, nimp, np34, i2;
	printf ("Informe um número inicial: ");
	scanf ("%d", &numI);
	printf ("Informe o número final: ");
	scanf ("%d", &numF);
	printf ("Faixa de valores: ");
	for (i = numI, nip=0, npa=0, nimp=0, np34=0, i2=0; i<=numF; i++)
	{
		printf("%d ", i);
		if (i>0){
			nip++;
			if (i%3==0 && i%4==0 && i!=0){
				np34++;}}
		if (i%2==0){
			npa++;}
		if (i%2!=0){
			nimp++;}
		
		i2++;
		
	}
		printf ("\nA quantiidade de números inteiros e positivos é igual a = %d", nip);
		printf ("\nA quantiidade de números pares é igual a = %d", npa);
		printf ("\nA quantiidade de números ímpares é igual a = %d", nimp);
		printf ("\nA quantiidade de números ímpares divisiveis por 3 e 4 é igual a = %d\n", np34);
		printf ("A média de números inteiros e positivos é igual a = %.2f\n", (float)nip/i2);
		printf ("A média de números pares é igual a = %.2f\n", (float)npa/i2);
		printf ("A média de números ímpares é igual a = %.2f\n", (float)nimp/i2);
		printf ("A média de números ímpares divisiveis por 3 e 4 é igual a = %f\n", (float)np34/i2);


	return 0;
}

