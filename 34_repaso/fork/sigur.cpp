#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <string.h>

#include <sys/types.h>
#include <sys/wait.h>

int contador = 0;

void handler (int signal_number){
	contador++;
}

int main(){
	struct sigaction sa;
	bzero(&sa, sizeof(sa));
	sa.sa_handler = &handler;

	sigaction(SIGCHLD, &sa, NULL);

	printf("Cosa %d veces.\n", contador);

	return 0;
}
