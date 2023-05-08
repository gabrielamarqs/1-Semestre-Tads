/*
 * l7e4.c
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
	int i, j;
	float soma=0, soma1=0;
	for (i=1, j=1; i<=25; i++)
	{
		soma1 = (float) j/i;
		soma = soma+soma1;
		j+=2;
	}
	
		printf ("A = %f\n", soma);

	return 0;
}

