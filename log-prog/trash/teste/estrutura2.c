					printf ("Que tal uma ação com drama?\n");
					scanf ("%c", &resp);
					flush_in(); 
					resp = tolower (resp);
					if (resp == 's') {
						printf ("com doses de mistério?\n");
						scanf ("%c", &resp);
						flush_in(); 
						resp = tolower (resp); 
						if (resp == 's') {
							printf ("então veja homeland");
						} else {
							printf ("mistério não? que tal terror?\n");
							scanf ("%c", &resp);
							flush_in(); 
							resp = tolower (resp);
							if (resp == 's') {
								printf ("então veja twd");
							} else {
								printf ("nada te interessou? que pena :( ");	
							}
						}	
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
							if (resp == 's') {
								printf ("então vai la ver dexter");
							} else {
								printf ("nenhum desses mesmo? :( "); 
							}
						}
					}
				
