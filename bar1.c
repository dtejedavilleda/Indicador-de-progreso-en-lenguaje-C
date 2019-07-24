//Indicador de progreso en lenguaje C
//Compilado en GCC 5.3.0
//Fecha y hora: 11-10-2016 20:35 hora central de México
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

int main (int argc, char **argv)
{
const char s[] = "-\\|/-\\|/";
const short operations = 300;
short i, pos=0;

for(i=0; i<=operations; i++)
{fprintf(stdout,"Progreso: %c\r",s[pos]);fflush(stdout);pos++;if(pos>=strlen(s))
pos=0;
sleep(1);
}
return EXIT_SUCCESS;
}
