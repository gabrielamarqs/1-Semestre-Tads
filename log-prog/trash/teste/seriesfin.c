#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int main()
{	char  resp;
	printf ("Ajudando a escolher a uma série para assistir:");
	printf ("Você gostaria de assistir a um drama?\n");
	scanf ("%c", &resp);
	flush_in(); 
	resp = tolower (resp); 
	if (resp == 's') {
		printf ("que tal junto com uma aventura?\n");
		scanf ("%c", &resp);
		flush_in(); 
		resp = tolower (resp); 
		if (resp == 's') {
			printf ("com umas pitadas de suspense?\n");
			scanf ("%c", &resp);
			flush_in(); 
			resp = tolower (resp); 
			if (resp == 's') {
				printf ("vc ja ouviu falar de lost?"); 
			} else {
				printf ("que tal fantasia então?\n");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp); 
				if (resp == 's') {
					printf ("veja got então!"); 
				} else {
					printf ("nenhum desses te interessou? tenta outras categorias então");}
			}
		} else {
			printf ("Você estaria interessado em algo de mistério então?\n");
			scanf ("%c", &resp);
			flush_in(); 
			resp = tolower (resp); 
			if (resp == 's') {
				printf ("um sci-fi vai?\n");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp); 
				printf ("então veja x-files");
			} else {
				printf ("e de médicos? rola?\n");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp); 
				if (resp == 's') {
					printf ("então veja house"); 
				} else {
					printf ("nenhuma dessas? que pena :( ");}
			}
			
		}
	} else {
		printf ("e um sobre crimes?\n");
		scanf ("%c", &resp);
		flush_in(); 
		resp = tolower (resp); 
		if (resp == 's') {
			printf ("então veja breaking bad"); 
		} else {
			printf ("e um sobre política então?\n");
			scanf ("%c", &resp);
			flush_in(); 
			resp = tolower (resp); 
			if (resp == 's') {
				printf ("então veja house of cards");
			} else {
				printf ("desculpa não tenho nada para te recomendar");}
		}
	}
		} else { 
			printf ("Você gostaria de assistir a uma comedia?\n");
			scanf ("%c", &resp);
			flush_in(); 
			resp = tolower (resp);
			if (resp == 's') {
				printf ("você gosta de romance?");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp);
				if (resp == 's') {
					printf ("então assista HIMYM");}
				else{
					printf ("e de musical?\n");
					scanf ("%c", &resp);
					flush_in(); 
					resp = tolower (resp);
					if (resp == 's') {
						printf ("então assista glee");}
					else{
						printf ("o que acha de um nerd?\n");
						scanf ("%c", &resp);
						flush_in(); 
						resp = tolower (resp);
						if (resp == 's') {
							printf ("então veja tbbt"); }
						else {
							printf ("não tenho nada para te recomendar então :( "); }
						}
					}	
			}
		}
	else{
		printf ("Você gostaria de assistir a uma série de ação então?\n");
		scanf ("%c", &resp);
		flush_in(); 
		resp = tolower (resp); 
		if (resp == 's') {
			printf ("Que tal uma ação com drama?\n");
			scanf ("%c", &resp);
			flush_in(); 
			resp = tolower (resp);
			if (resp == 's') {
				printf ("com doses de mistério?\n");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp); 
				if (resp == 's')
					printf ("então veja homeland");
				} else {
					printf ("mistério não? que tal terror?\n");
					scanf ("%c", &resp);
					flush_in(); 
					resp = tolower (resp);
					if (resp == 's')
						printf ("então veja twd");}
						else {
							printf ("nada te interessou? que pena :( ");	}
		} else {
			printf ("que tal um policial?\n");
			scanf ("%c", &resp);
			flush_in(); 
			resp = tolower (resp);
			if (resp == 's') {
				printf ("então veja csi");
			} else { 
				printf ("uma série sobre crimes vai?\n");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp); 		
				if (resp == 's')
					printf ("então vai la ver dexter");
			  } else {
				  printf ("nenhum desses mesmo? :( "):}
			
}
	else 
		printf ("n tenho nd então pra vc meu amor");
	
	
	return 0;
}

