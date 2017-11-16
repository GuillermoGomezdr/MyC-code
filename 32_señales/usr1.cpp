#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#include <string.h>
#include <sys/types.h>
#include <unistd.h>

sig_atomic_t veces = 0;
//const char *

void manejador (int veces){
	veces++;
}



int main () {
	struct sigaction sa;
	bzero(&sa, sizeof(sa));
	sa.sa_handler = &manejador;

	sigaction(SIGUSR1, &sa, NULL);

	printf("SIGUSR1 was raised %d times\n", sigusr1_count);

	return EXIT_SUCCESS;
}
