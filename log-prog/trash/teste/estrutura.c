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
		} else { 
			printf ("Você gostaria de assistir a uma comedia?\n");
			scanf ("%c", &resp);
			flush_in(); 
			resp = tolower (resp);
			if (resp == 's') { 
			} else {
				printf ("Você gostaria de assistir a uma série de ação então?\n");
				scanf ("%c", &resp);
				flush_in(); 
				resp = tolower (resp); 
				if (resp == 's') { 
				} else {  
					printf ("n tenho nd então pra vc meu amor"); }
	
	
	return 0;
}


