#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>

#define N 0x100

				// ESTO NO FURULA :'D

const char *program_name;

void print_usage(FILE *out, int status){
	fprintf( out, "%s  -d<domain> [-p<port|port name>=smtp] <email file> \n", program_name);
	exit(status);
}

int main (int argc, char *argv[]) {
	
	char mailmando[N] = "cat %s | telnet %s %s";
	const char *servidor = NULL;
	char puerto[N] = "smtp";
	int verbose = 0;

	int sig_option;
	const char * op_cortas = "hd:p:v";
	const struct option op_largas[] = {
		{"help", 0, NULL, 'h'},
		{"domain", 1, NULL, 'd'},
		{"port", 1, NULL, 'p'},
		{"verbose", 0, NULL, 'v'},
		{NULL, 0, NULL, '\0'}
	};
	program_name = argv[0];

	do{
		sig_option = getopt_long( argc, argv, op_cortas, op_largas, NULL);

		switch(sig_option){
			case 'h':
				print_usage(stdout, EXIT_SUCCESS);
				break;
			case 'd':
				servidor = optarg;
				break;
			case 'p':
				strcpty(puerto, optarg);
				break;
			case 'v':
				verbose = 1;
				break;
			case '?':	//No hay más opciones.
				print_usage(stderr, EXIT_FAILURE);
				break;
			case -1:	//En caso de haber opciones inválidas.
				break;
			default:
				abort();
		}
	} while (sig_option);
	if(servidor == NULL){
		fprintf(stderr, "You have to specify a mail server.\n");
		print_usage(stderr, EXIT_FAILURE);
		
	}

	//optind será el primer valor a la hora de ejecutar el programa que no esté precedido por -
	sprintf(mailmando, mailmando, argv[optind], servidor, puerto);

	if(verbose)
		printf("Command: %s\n", mailmando);


	//En el sprintf, el segundo mailmando es el que indicará que los 3 strings siguientes van en
	//cada %s del mailmando.
	//El primer mailmando significa, que al ser un print, el print en vez de pantalla se haga en
	//el mailmando.

		sprintf(mailmando, mailmando, "email.addr", "Sharklasers.com", "smtp");
	system(mailmando);	
	return EXIT_SUCCESS;
}
