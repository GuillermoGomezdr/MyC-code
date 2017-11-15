#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

#define N 0x100		//Recuerda que 0x indica que el sig num está en hexadecimal.
#define M 0x10

void spawn (char buffer[N]){
	char *argv[M];
	int i = 0;
	pid_t hijo = 0;

	while(argv[i++] = strtok(buffer, " "))
		buffer = NULL;

	strtok(argv[i-2], "\n");
	hijo = fork(); 		//Se guarda el identificador (pid) del hijo en el padre.
	if(hijo)
		return;

	execvp(argv[0], argv);	//El argv[0] equivaldría a la ruta de lo que hayamos metido.
	fprintf(stderr, "No he podido ejecutar %s\n", argv[0]);
	exit(1);
}

int main (int argc, char *argv[]) {
	
	char buffer[N];

	while(1){
		printf("MA-TEOS$ ");	
		fgets(buffer, N, stdin);
		spawn(buffer);
	}
	
	return EXIT_SUCCESS;
}
