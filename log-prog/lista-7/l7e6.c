/*
 * l7e6.c
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
	int i, alun=1, a=0, b=0, c=0, d=0, e=0;
	float nota;
	printf ("Notas dos alunos [entre 0 e 10]\n\n");
	for (i=0; i<40; i++)
	{
		printf ("Informe a nota do aluno %d: ", alun);
		scanf ("%f", &nota);
		if (nota <= 10  && nota >= 9) {
			printf ("Conceito A.\n");
			a++;}
		else if (nota >= 7 && nota < 9) {
			printf ("Conceito B.\n");
			b++;}
		else if (nota >= 5 && nota < 7) {
			printf ("Conceito C.\n");
			c++;}
		else if (nota >= 3 && nota < 5) {
			printf ("Conceito D.\n");
			d++;}
		else if (nota >= 0 && nota < 3) {
			printf ("Conceito E.\n");
			e++;}
		else { printf ("\nEntrada inválida.\n");}
		alun++;
		
	}
		printf ("\nQuantidade de alunos = %d\n", i);
		printf ("\nQuantidade alunos que tiraram conceito A: %d", a);
		printf ("\nQuantidade alunos que tiraram conceito B: %d", b);
		printf ("\nQuantidade alunos que tiraram conceito C: %d", c);
		printf ("\nQuantidade alunos que tiraram conceito D: %d", d);
		printf ("\nQuantidade alunos que tiraram conceito E: %d\n", e);
		printf ("\nPorcentagem de alunos que tiraram conceito A: %.1f", (float)a*100/i);
		printf ("\nPorcentagem de alunos que tiraram conceito B: %.1f", (float)b*100/i);
		printf ("\nPorcentagem de alunos que tiraram conceito C: %.1f", (float)c*100/i);
		printf ("\nPorcentagem de alunos que tiraram conceito D: %.1f", (float)d*100/i);
		printf ("\nPorcentagem de alunos que tiraram conceito E: %.1f", (float)e*100/i);




	return 0;
}

