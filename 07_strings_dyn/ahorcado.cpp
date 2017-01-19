#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 0x200

	const char *palabra[] = {"patata", "amalgama", "narcolepsia",
	"suricato", "parguela", "shuriken", "panenteismo", "nemesis", 
	"antitesis", "origen","artropodo", NULL};

int main () {

	char adivinado[N], errores[N];
	const char *elegida;
	char letra;
	int aleatorio, nLetras = 0, cErrores = 0;

	//Primera parte.
	//Tomamos una palabra al azar del char *palabra[]
	srand(time(NULL));
	aleatorio = rand() % (sizeof(palabra)/sizeof(char *)-1);		
	elegida = palabra[aleatorio];

	//printf(" %s\n", elegida);
	
	//Rellenamos de ceros el adivinado y luego de '_'. Su cantidad igualará 
	//al nº de caracteres de la palabra seleccionada.
	bzero(adivinado, N);
	bzero(errores, N);
	nLetras = strlen(elegida);
	for(int i=0; i<nLetras; i++)
		adivinado[i]='_';

	//printf(" %s\n", adivinado);
	

	//Segunda parte.
	
	while(nLetras >	0 && cErrores < 5){
		printf("Introduzca una letra: ");
		scanf(" %c", &letra);

		int prevnLetras = nLetras;
		for(int i=0; i<strlen(elegida); i++){
			if(letra == elegida[i]){
				adivinado[i] = letra;
				nLetras --;
			}
		}

		if(prevnLetras == nLetras)
			errores[cErrores++] = letra;
			
		printf(" %s\n", adivinado);
		printf(" Número de errores: %i\n Fallos restantes: %i\n", cErrores, 5-cErrores);
		if(cErrores > 0)
			printf(" Letras erroneas dichas: %s\n", errores);
	}
	if(nLetras == 0)
		printf("\n ¡Enhorabuena!\n¡Has ganado!\n");
	else if(cErrores == 5)
		printf("\n Oooooh... \n Has perdido... \n Intentalo de nuevo.\n");
	return EXIT_SUCCESS;
}
