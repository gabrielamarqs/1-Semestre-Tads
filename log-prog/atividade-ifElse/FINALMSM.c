#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int main()
{	char  resp;
		printf ("Ajudando a escolher a uma série para assistir:\n");
		printf ("DRAMA [S][N]?\n");
		scanf ("%c", &resp);
		flush_in(); 
		resp = tolower (resp); 
		if (resp == 's') { 
		printf ("AVENTURA [S][N]?\n");
		scanf ("%c", &resp);
		flush_in(); 
		resp = tolower (resp); 
		if (resp == 's') {
			printf ("SUSPENSE [S][N]?\n");
			scanf ("%c", &resp);
			flush_in(); 
			resp = tolower (resp); 
			if (resp == 's') {
				printf ("LOST"); }
			else if (resp != 'n' && resp != 's')
				printf ("entrada inválida");
			else {
				printf ("FANTASIA [S][N]?\n");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp); 
				if (resp == 's') {
					printf ("GAME OF THRONES"); }
				else if (resp != 'n' && resp != 's')
					printf ("Entrada inválida.");
				else {
					printf ("Desculpe, não tenho outras recomendações para você :( "); } 
			}
		} 
		else if (resp != 'n' && resp != 's')
			printf ("Entrada inválida.");
		else if (resp == 'n') {
			printf ("MISTÉRIO [S][N]\n");
			scanf ("%c", &resp);
			flush_in(); 
			resp = tolower (resp); 
			if (resp == 's') { 
				printf ("SCI-FI [S][N]?\n");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp); 
				if (resp == 's') {
					printf ("X-FILE"); } 
				else if (resp != 'n' && resp != 's')
					printf ("Entrada inválida.");	
				else if (resp == 'n') {
					printf ("MÉDICO [S][N]?\n");
					scanf ("%c", &resp);
					flush_in(); 
					resp = tolower (resp); 
					if (resp == 's') {
						printf ("HOUSE"); }
					else if (resp != 'n' && resp != 's')
						printf ("Entrada inválida.");
					else {
						printf ("nenhuma dessas? que pena :( "); }
				}	
			} 
			else if (resp != 'n' && resp != 's')
				printf ("Entrada inválida.");
			else {
				printf ("CRIMES [S][N]?\n");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp); 
				if (resp == 's') {
					printf ("BREAKING BAD"); }
				else if (resp != 'n' && resp != 's')
					printf ("Entrada inválida.");
				else {
					printf ("POLÍTICA [S][N]?\n");
					scanf ("%c", &resp);
					flush_in(); 
					resp = tolower (resp); 
					if (resp == 's') { 
						printf ("HOUSE OF CARDS"); }
					else if (resp != 'n' && resp != 's')
						printf ("Entrada inválida.");
					else {
						printf ("desculpa não tenho nada para te recomendar :( ");}
				}
			}
		}
		}
		else if (resp != 'n' && resp != 's')
			printf ("Entrada inválida.");
		else if (resp == 'n') { 
			printf ("COMEDIA [S][N]?\n");
			scanf ("%c", &resp);
			flush_in(); 
			resp = tolower (resp);
			if (resp == 's') {
				printf ("ROMANCE [S][N]?");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp);
				if (resp == 's') {
					printf ("HOW I MET YOUR MOTHER"); }
				else if (resp != 'n' && resp != 's')
					printf ("entrada inválida");
				else if (resp == 'n') {
					printf ("MUSICAL?\n");
					scanf ("%c", &resp);
					flush_in(); 
					resp = tolower (resp);
					if (resp == 's') {
						printf ("GLEE"); }
					else if (resp != 'n' && resp != 's')
						printf ("entrada inválida");
					else {
						printf ("NERD?\n");
						scanf ("%c", &resp);
						flush_in(); 
						resp = tolower (resp);
						if (resp == 's') {
							printf ("THE BIG BANG THEORY"); }
						else if (resp != 'n' && resp != 's')
							printf ("entrada inválida");
						else {
							printf ("não tenho nada para te recomendar então :( "); }
					}
				}
			} 
			else if (resp != 'n' && resp != 's')
				printf ("Entrada inválida.");
			else if (resp == 'n'){
				printf ("AÇÃO ?\n");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp); 
				if (resp == 's') {
					printf ("DRAMA [S][N]?\n");
					scanf ("%c", &resp);
					flush_in(); 
					resp = tolower (resp);
					if (resp == 's') {
						printf ("MISTÉRIO [S][N]?\n");
						scanf ("%c", &resp);
						flush_in(); 
						resp = tolower (resp); 
						if (resp == 's') {
							printf ("HOMELAND"); }
						else if (resp != 'n' && resp != 's')
							printf ("entrada inválida");
						else {
							printf ("TERROR [S][N]?\n");
							scanf ("%c", &resp);
							flush_in(); 
							resp = tolower (resp);
							if (resp == 's') {
								printf ("THE WALKING DEAD"); }
							else if (resp != 'n' && resp != 's')
								printf ("entrada inválida");
							else {
								printf ("nada te interessou? que pena :( "); }
						}	
					} 
					else if (resp != 'n' && resp != 's')
					printf ("entrada inválida");
					else {
						printf ("POLICIAL?\n");
						scanf ("%c", &resp);
						flush_in(); 
						resp = tolower (resp);
						if (resp == 's') {
							printf ("CSI"); }
						else if (resp != 'n' && resp != 's')
							printf ("entrada inválida");
						else { 
							printf ("uCRIME [S][N]?\n");
							scanf ("%c", &resp);
							flush_in(); 
							resp = tolower (resp); 		
							if (resp == 's') {
							printf ("DEXTER"); } 
							else if (resp != 'n' && resp != 's')
								printf ("entrada inválida");
							else {
								printf ("nenhum desses mesmo? :( "); 
							}
						}
					}
				} 
				else if (resp != 'n' && resp != 's')
					printf ("Entrada inválida.");
				else {  
					printf ("n tenho nd então pra vc meu amor"); }}}
	
	
	return 0;
}
