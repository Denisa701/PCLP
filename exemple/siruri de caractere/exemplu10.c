#include <stdio.h>
#include <string.h>
void main (void)
{ 
    char sir[80]="- Iata, un exemplu. De text!.", delim[4]=",.-", *p;
    int i;
    printf ("Separarea sirului \"%s\" in subsiruri delimitate de \",.-\":\n\n",sir); p = strtok (sir, delim);
    while (p != NULL)
    { 
        printf ("%s\n",p); p = strtok (NULL, delim);
    }
    printf("\nAsa se afiseaza acum, cu printf(), sirul initial: %s\n", sir);
    printf("\nAsa se afiseaza caracterul nul: A%cA\n", '\0');
    puts("\nIata ce contine la final sirul initial (afisat caracter cu caracter):\n");
    for (i=0; sir[i]!='!'; i++)
    putchar(sir[i]);
}