#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <unistd.h>

// Creamos un proceso hijo ejecutando un nuevo programa.
// PROGRAM es el nombre del programa a correr. El camino será buscado para este programa.
// ARG_LIST es una lista de caracteres terinada en null, que se pasará como lista de argumento del programa.
// Devolverá el PDI del proceso creado.

int spawn (char* program, char** arg_list){
	pid_t child_pid;		
			
	child_pid = fork ();		//Duplicamos este proceso.
	if (child_pid != 0)		//Este es el proceso padre.
		return child_pid;
	else {
		execvp (program, arg_list);	//Ejecutamos PROGRAM buscándolo en la ruta.
		fprintf (stderr, "Ha ocurrido un error en execvp.\n");	//La función de execvp hará el return solo si ocurre un error. (¡Un error como tú!) 
		abort ();
	}
}

int main (){
	char* arg_list[] = {		//La lista de argumentos a pasar al comando 'ls'.
	"ls", 				// argv[0], el nombre del programa.
	"-l",
	"/",
	NULL 				//La lista de argumentos siempre debe terminar con un NULL.
	};

	spawn ("ls", arg_list);		//Crearemos un proceso hijo que ejecuté el comando 'ls, e ignoramos el PID del hijo devuelto con el return.
	printf ("Ha terminado el programa principal.\n");
	return 0;
}
