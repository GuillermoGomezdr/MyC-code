#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>

#include <signal.h>
#include <sys/types.h>

int veces = 0;

const char *msj[] = {
	"No moriré.", 
	"No me rendiré.",
	"Hasta la victoria."
};

void manejador(int signal){
	printf("%s\n", msj[veces++]);
}

int main() {
	struct sigaction sa;
	bzero(&sa, sizeof(sa));
	sa.sa_handler = &manejador;

	sigaction(SIGUSR1, &sa, NULL);

	while(veces<3) usleep (10000);

	printf("Adios, mundo cruel.\n");

	return EXIT_SUCCESS;
}
