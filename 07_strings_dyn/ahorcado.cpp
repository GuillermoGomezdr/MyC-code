#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x200
#define CANTIDAD(x) (sizeof((x))/sizeof(char *)-1)

const char *palabra[] = {"patata", "amalgama", "narcolepsia", "suricato", 
"parguela", "shuriken", "panenteismo", "nemesis", "antitesis", "origen",
"artropodo", NULL};

int main () {
	char buffer[N];
	char *palabra;
	char letra;
	int longitudPalabra;

	printf("Intrduzca una palabra:");
	fgets(buffer, N, stdin);

	longitudPalabra = strlen(buffer)+1;
	palabra = (char *) malloc(strlen(buffer)+1);
	
	/*for(int i=0; i<strlen(elegida); i++)
	 	adivinado[i] = '_';

	*/

	printf("Intenta adivinar la palabra.\n Introduce una letra:");
	scanf(" %c", &letra);
	for(int i = 0; i < longitudPalabra; i++){
		if(letra == buffer[i]){
		printf("patata");	
		}
	}

	
	//strcpy(palabra, buffer);
	//printf("La palabra que has escrito es: %s\n", palabra);

	free(palabra);
	return EXIT_SUCCESS;
}
