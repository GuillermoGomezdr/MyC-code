#include <stdio.h>
#include <stdlib.h>

int main () {

	int colores[3];

	printf("Conteste a las siguientes preguntas, escribiendo 1 si es afirmativo, y 0 si no lo es.\n");
	printf("¿Ve el color rojo?\n");
	scanf(" %i", &colores[0]);

	printf("¿Ve el color azul?\n");
	scanf(" %i", &colores[1]);

	printf("¿Ve el color amarillo?\n");
	scanf(" %i", &colores[2]);

	if(colores[0] == 1 && colores[1] == 0 && colores[2] == 0)
		printf("Usted ve el color rojo\n");
	if(colores[0] == 1 && colores[1] == 1 && colores[2] == 0)
		printf("Usted ve el color morado\n");
	if(colores[0] == 1 && colores[1] == 1 && colores[2] == 1)
		printf("Usted ve el color blanco\n");
	if(colores[0] == 1 && colores[1] == 0 && colores[2] == 1)
		printf("Usted ve el color naranja\n");
	if(colores[0] == 0 && colores[1] == 1 && colores[2] == 0)
		printf("Usted ve el color azul\n");
	if(colores[0] == 0 && colores[1] == 1 && colores[2] == 1)
		printf("Usted ve el color verde\n");
	if(colores[0] == 0 && colores[1] == 0 && colores[2] == 1)
		printf("Usted ve el color amarillo\n");
	if(colores[0] == 0 && colores[1] == 0 && colores[2] == 0)
		printf("Usted ve el color negro\n");
	
	return EXIT_SUCCESS;
}
