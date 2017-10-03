#include <stdio.h>
#include <stdlib.h>

#include <getopt.h> //Librería que nos permitirá usar getopt_long
#define DEBUG(...) if (verbose) \
	fprintf(stderr, __VA_ARGS__);

const char* program_name;
int verbose = 0;

void print_usage(FILE* stream, int exit_code){
	fprintf(stream, "*Usage: %s \n", program_name);
	fprintf(stream,
		"This program converts from any base to any base.\n");
	exit(exit_code);
}

int main (int argc, char* const argv[]) {
	int next_option;
	int output_base;

	const char* const short_options = "hb:v";
	const struct option long_options[] ={
		{"help",	0,	NULL,	'h'},
		{"base",	1,	NULL,	'o'},
		{"verbose",	0,	NULL,	'v'}
	};
	
	program_name = argv[0];

	do{
		next_option = getopt_long(argc, argv, short_options, long_options, NULL);
		switch(next_option){
			case 'h':
				print_usage(stdout, EXIT_SUCCESS);
				break;
			case 'b':
				output_base = atoi(optarg);
				DEBUG("Estableciendo la base de salida a %i\n", output_base);
				break;
			case 'v':
				verbose = 1;
				break;
			case '?':
				print_usage(stderr, EXIT_FAILURE);
			case -1:
				break;
			default:
				abort();
		}
	}	
	while(next_option != -1);

	if(verbose)
		printf("Funcionando.\n");

	return EXIT_SUCCESS;
}
