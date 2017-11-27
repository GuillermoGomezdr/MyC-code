#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <unistd.h>

int main (){
	pid_t child_pid;
	printf ("El ID del proceso del programa principal es %d\n", (int) getpid ());
	child_pid = fork ();

	if (child_pid != 0) {
		printf ("Este es el proceso padre, con ID %d\n", (int) getpid ());
		printf ("El ID del proceso hijo es %d\n", (int) child_pid);
	} else
		printf ("\nEste es el proceso hijo, con ID %d\n", (int) getpid ());
	return 0;
}
