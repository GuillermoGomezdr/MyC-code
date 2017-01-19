#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 0x200
#define CANTIDAD(x) (sizeof((x))/sizeof(char *)-1)

	const char *palabra[] = {"patata", "amalgama", "narcolepsia",
	"suricato", "parguela", "shuriken", "panenteismo", "nemesis", 
	"antitesis", "origen","artropodo", NULL};

int main () {

	char adivinado[N];
	const char *elegida;
	char letra;
	int aleatorio, fin = 0;

	//Primera parte.
	//Tomamos una palabra al azar del char *palabra[]
	srand(time(NULL));
	aleatorio = rand() % CANTIDAD(palabra);		
	elegida = palabra[aleatorio];

	printf(" %s\n", elegida);
	
	//Rellenamos de ceros el adivinado y luego de '_'. Su cantidad igualará 
	//al nº de caracteres de la palabra seleccionada.
	bzero(adivinado, N);
	for(int i=0; i<strlen(elegida); i++)
		adivinado[i]='_';

	//printf(" %s\n", adivinado);
	

	//Segunda parte.
	//Pediremos letras.
	printf("Introduzca una letra");
	scanf(" %c", &letra);
	
	for(int i=0; i<strlen(elegida); i++){
		if(letra == elegida[i]){
			adivinado[i] = letra;
		}
	}

	printf(" %s\n", adivinado);
	return EXIT_SUCCESS;
}
