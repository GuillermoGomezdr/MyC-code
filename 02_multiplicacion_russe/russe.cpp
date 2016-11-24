#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	//Declaro las variables op1, op2 y resultado
	//Pedimos op1 y op2 al usuario
	//Poner resultado = 0

	//   Si op2 es impar
	//   	acumulamos op1 en resultado
	//   Dividimos op2 / 2
	//   Dulplicamos Op1
	//Repetir si op2 > 0
	
	int op1;
	int op2;
	int resultado = 0;

	int o1;
	int o2;	
	//También podríamos ponerlo como:
	//int op1, op2, resultado;

	printf("Introduce un valor para Operando 1: ");
	scanf(" %i", &op1);
	o1 = op1;

	printf("Introduce un valor para Operando 2: ");
	scanf(" %i", &op2);
	o2 = op2;

	do{
		if (op2 % 2 == 1)
			resultado += op1;
		op2 /= 2;
		op1 *= 2;

		// Como dividir entre dos es desplazar los bits una posición a la derecha, y multiplicar, al contrario, también se podría escribir lo anterior tal que:
		// op2 >>= 1:
		// op1 <<= 1;

	} while (op2 >0);
	
	printf(" %i x %i = %i\n", o1, o2, resultado);

	//En este último printf, lo que estaremos haciendo es sustituir en una cadena de texto, el %i por el contenido de la variable que le corresponda a la derecha. Es decir el primer %i daría el contenido del op1, el segundo del op2 y el tercero de resultado

	return EXIT_SUCCESS;
}
