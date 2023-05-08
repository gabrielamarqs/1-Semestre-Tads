/*
 * l7e2.c
 * 
 * Copyright 2022 Superior <superior@admlab-HP-Compaq-Pro-6305-SFF>
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
	int i, num, soma, med, mav, mev;
	for (i=0, soma=0, med=0, mav=0, mev=0; i<30; i++)
	{
		printf ("Informe 30 números reais: ");
		scanf ("%d", &num);
		if (num >= 6) {
			soma=soma+num;
			med++;}
		if (i==0){
			mav = num;
			mev = num;}
		else if (num > mav){
				mav = num;}
		else if (num < mev){
				mev = num;}
	}
		printf ("\nA média vai ser igual a = %.2f\n", (float)soma/med);
		printf ("O maior número = %d\n", mav);
		printf ("O menor número = %d", mev);
	return 0;
}

