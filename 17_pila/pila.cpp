#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>

#define Max_Pila 100

//Creamos una estructura que guarde las coordenadas x e y.
struct TCoord{
	int x;
	int y;
};

//Creamos una estructura que nos guarde un int cima, que nos marcará el nivel máximo que
//alcanza nuestra pila. También crearemos una de tipo "struct TCoord" (la que habíamos
//creado justo antes), que nos permitirá guardar o tomar esas coordenadas, tantas veces 
//como máximo de pila hayamos asignado previamente.
struct TPila{
	struct TCoord *data[Max_Pila];
	int cima;	
};

//Crearemos una FUNCION de tipo "struct TCoord", que lo que hará será:
//1º Guardarnos espacio de memoria.
//2º Asignar un valor aleatorio a X e Y.
struct TCoord *valor_random(){
	struct TCoord *nueva;
	nueva = (struct TCoord *) malloc(sizeof(struct TCoord));
	nueva -> x = rand() % Max_Pila;
	nueva -> y = rand() % Max_Pila;
	return nueva;
}

//Crearemos una FUNCION de tipo booleano.
//A esta función le pasaremos la dirección de memoria de la estructura TPila, y de la 
//estructura TCoord.
	//En primer lugar, miraremos la cima de la TPila, y si es mayor o igual que el máximo que
	//hemos asignado previamente, devolveremos false, impidiendo aumentar la pila e introducir
	//un nuevo dato.
	
	//En segundo lugar, mirare en la TPila, el array de data. Más concretamente, la posición del
	//array que coincida con el número que corresponde al tope de la cima. Como ya hemos visto en
	//el anterior if, que no hemos superado el máximo, significará que nos quedará hueco y por tanto,
	//podremos y guardaremos el dato que corresponde al pasar el valor de la dirección de memoria de
	//la estructura TCoord.
bool push(struct TPila *pila, struct TCoord *dato){
	if(pila -> cima >= Max_Pila){
		printf("La pila ha alcanzado su tope. Vacía alguna posición antes de volver a intentar añadir más.\n");
		return false;
	}
	pila -> data[pila->cima++] = dato;
	printf("Añadimos a la pila la posición %i, que contiene: (%i, %i)\n", pila->cima-1,pila->data[pila->cima-1]->x, pila->data[pila->cima-1]->y);

	return true;
}

//Crearemos otra FUNCION de tipo booleano.
//A esta función solo le pasaremos la dirección de memoria de la estructura TPila.
	//En primer lugar, comprobaremos que el tope de la cima, no es ni cero, ni por algún casual, algún
	//número menor. Si se da el caso, significará que no tendrémos nada en la pila, por lo que
	//devolveremos false, y no haremos nada más.
	
	//Luego, una vez comprobado que tenemos elementos en la pila, bajamos la cima 1 posición.
	//OJO: Esto no borrará lo que hubiese en esa posición, se quedará allí a la espera de que 
	//si se vuelve a aumentar la pila, algo lo pise.
	//Continuando, terminaremos con liberar el espacio de esa parte de la reserva de memoria, 
	//y devolver true.
	
	//Volviendo a la liberación de espacio.
		//Primero, miraremos en la estructura TPila, el array data. 
		//Luego, le diremos un índice. (ATENCIÓN, ESTO ES MUY RARO)
		//Al decirle este índice, primero haremos el "pila -> cima",
		//ya que al igual que los paŕentesis tienen preferencia sobre 
		//las operaciones, el "->" tiene preferencia sobre el "--".
		//Por tanto, tomaremos el valor numérico de la cima en la 
		//estructura TPila, y luego le restaremos uno.
bool pop(struct TPila *pila){
	if(pila -> cima <= 0){
		printf("Pila vacía.\n");
		return false;
	}
	printf("Quitamos de la pila la posición %i, que contiene: (%i, %i)\n", pila->cima-1,pila->data[pila->cima-1]->x, pila->data[pila->cima-1]->y);
	pila -> cima--;
	free(pila->data[pila->cima]);
	return true;

}

//Crearemos una FUNCION de tipo void, que servirá para mostrarnos la pila.
//Simplemente, le pasaremos la estructura TPila e iremos recorriendo los valores de pila.data[i]
//(tanto x como y) hasta que hayamos recorrido la totalidad de sus posiciones.
void mostrar(struct TPila pila){
	for(int i = 0; i<pila.cima; i++)
		printf("Posicion %i de la pila: (%i, %i)\n", i, pila.data[i]->x, pila.data[i]->y);
}
 

//El main es lo más sencillo:
//Definimos una estructura de tipo TPila...
//... y la rellenamos de ceros.

//Definimso también una variable tipo int, llamada num, que usaremos para que el usuario nos indique
//que quiere hacer con la pila. Luego le mostraremos que opciones tiene para que pueda seleccionar la
//que quiera.

//Crearemos un bucle while que se recorrerá todo el rato, hasta que el usuario introduzca el número 5.
//El resto de números llamarán a la función que le corresponda.
int main () {

	struct TPila objConCoord;
	
	bzero(&objConCoord, sizeof(objConCoord));

	int num;
	printf("Para añadir un nuevo valor a la pila, pulse 1.\nPara quitar el último valor de la pila, pulse 2.\n");
	printf("Para borrar toda la pila, pulse 3.\nPara mostrar toda la pila, pulse 4\nPara salir, pulse 5.\n");
	while(1){
		scanf(" %i", &num);
		if(num == 1)
			push(&objConCoord, valor_random());
		else if(num == 2)
			pop(&objConCoord);
		else if(num == 3){  
			while(pop(&objConCoord));
			printf("Borrado.\nPila ahora vacía.\n");
		}
		else if(num == 4)
			mostrar(objConCoord);
		else if(num ==5)
			return EXIT_SUCCESS;
		else
			printf("El número introducido no está asignado a ninguna acción.\n Introduzca de nuevo el número.\n");
	}
		
	return EXIT_SUCCESS;
}
