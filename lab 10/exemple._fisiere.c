#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 /*pentru functia exit()*/
void main (void)
{ FILE * fisier;
char c;
fisier=fopen("exemplu.txt", "wt");
if (fisier)==NULL)
{puts("Fisierul nu poate fi deschis \n");
exit(1);
}
puts("Tastati o fraza ce se incheie cu punct \n");
do
{ c=getchar(); /*citeste unul dintre caracterele tastate*/
printf("debug\n");
putc(c,"exemplu.txt" ); /*scrie caracterul in fisier*/
printf("debug\n");
} while (c!='.');
fclose(fisier);
}