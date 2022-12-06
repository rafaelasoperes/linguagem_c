#include <stdio.h>

#include <string.h>

main()

{

int cont, x;

char apelido[10];

strcpy (apelido, "papelao");

cont = strlen(apelido) - 1;

for (x=0; x <= cont; x++)

     printf ("%d", x - 1);

}