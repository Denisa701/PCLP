#include <stdio.h>
#include <string.h>
void main (void)
{ 
    char text[101], *p, separator[]=" ,.";
    int k=0; /*va fi folosit pt. a numara cuvintele din text*/
    puts("Introduceti textul (cel mult 100 de caractere):");
    gets(text);
    puts("Cuvintele din text sunt:");
    p=strtok(text,separator);
    while(p)
    { 
        k++;
        puts(p);
        p=strtok(NULL,separator);
    }
    printf("\nNumarul total de cuvinte: %d\n", k);
}