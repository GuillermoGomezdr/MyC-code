#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <error.h>
#include <errno.h>

const char *good_chars = "TCAKQP-";

void
print_usage (FILE * output)
{
  fprintf (output, USAGE, program_invocation_short_name);
}

void
error_ocurred ()
{
  print_usage (stderr);
  error (-errno, errno, "%s\n", strerror (errno));
}

int
repeat (void)
{
  return 1;
}

char
transform (char c)
{
   c = toupper (c);
   if (!strchr(good_chars, c))
       c = '\0';
   if (c == '-')
       c = ' ';
   return c;
}

void

load (const char *filename, char storage[SIZE][SIZE])
{
  FILE *pf;
  char c;
  int row = 0, col = 0;

  memset(storage, ' ', SIZE*SIZE);

  pf = fopen (filename, "r");
  if (!pf)
    error_ocurred ();

  while (!feof (pf) )
  {
      c = fgetc (pf);
      if (c == '\n'){
          col = 0;
          row++;
      }
      c = transform (c);

      if (c)
          storage[row][col] = c;
      col++;

  }

  fclose (pf);
}

void dump (char board[SIZE][SIZE])
{
  int i = 0;
  int o = 0;
  for(i = 0; i < SIZE; i++){
    for(o = 0; o < SIZE; o++){
      printf(" %c", board[i][o]);
    }
    printf("\n");
  }
}

void
ask_coordinates (int *y, int *x, const char *name)
{
 printf("¿En qué columna deseas colocar tu %s?", name); 
 scanf(" %i", x);
 x--;
 printf("¿En qué fila deseas colocar tu %s?", name);
 scanf(" %i", y);
 y--;
}
