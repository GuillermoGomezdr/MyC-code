#include <stdio.h>
#include <stdlib.h>

// Hoy haremos arrays de punteros a funciones.


// 1. Creamos funciones, el número que queramos.
// Han de ser del mismo tipo (en este caso void)
// Y pedir el mismo tipo de parámetos (en este caso int)

void patata(int num){
	printf("%i patatas.\n", num);
}

void cacatua(int num){
	printf("%i cacatuas.\n", num);
}

int main () {

	int numS;
	printf("Introduce un número: ");
	scanf(" %i", &numS);


	// 2. Seguiremos el siguiente esquema:
	// tipoDeFuncion (* nombreFuncion[numeroDeFunciones](tipoDeParametro nombreParametro){
	//	&nombreFuncion1,
	//	&nombreFuncion2,
	//	[...]
	//	&nombrefuncionLoquesea
	//};

	void (* algo[2])(int num){
		&patata,
		&cacatua
	};

	// 3. Llamar a la función que queramos.
	// (* nombreFuncion[numeroDeLaFuncionQueQueramos])(valorQueQueramos);

	if(numS <= 3)
		(* algo[0])(numS);
	else if(numS >3)
		(* algo[1])(numS);

	return EXIT_SUCCESS;
}

