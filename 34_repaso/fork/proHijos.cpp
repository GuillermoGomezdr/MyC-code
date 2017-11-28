#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <string.h>

#include <sys/types.h>
#include <sys/wait.h>
					//Esto no va :'D
void ejecutar_programa(int programaHijo){
	printf("Entra.");
	switch(programaHijo){
		case 0:			//Firefox
			execl("usr/bin/firefox", "firefox", "www.google.es", NULL);
			break;

		case 1:
			printf("Caso 1.");
			execl("usr/bin/gedit", "gedit", "hola", NULL);
			break;

		default:
			break;
	}
}

void spawn(int programa){
	pid_t pidHijo = fork();
	
	if(pidHijo)
		return;
	printf("Patata");
	ejecutar_programa(programa);
}

void muerteHijo(int signal){
	int muerteNatural;
	printf("Entra en muerteHijo.\n");
	
	wait(&muerteNatural);
}

int main(){
	struct sigaction sa;
	bzero(&sa, sizeof(sa));
	sa.sa_handler = &muerteHijo;

	sigaction(SIGCHLD, &sa, NULL);

	for(int i=0; i<2; i++)
		spawn(i);	
	//printf("Hola");	
	return 0;
}
