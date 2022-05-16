#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <conio.h>

void scrie_linii(char * tp[ ],int n);

void ordoneaza_linii(char * tp[ ], int n);
int citeste_linii(char * tp[ ]);
int main(void)
{ 
    char * t_adr[100]={NULL};
    int nr;
    printf("Tastati mai multe linii de text (max. 80 de caractere)\n\
        Terminati introducerea datelor prin tastarea unei linii vide (ENTER)\n");
    nr=citeste_linii(t_adr); /*s-au citit nr linii de text; adresele lor au fost puse in t_adr*/
    printf("\n\nLiniile citite initial:\n"
        "-----------------------\n");
    scrie_linii(t_adr,nr);
    ordoneaza_linii(t_adr,nr);
    printf("\n\nLiniile, dupa ordonare:\n"
        "-----------------------------\n");
    scrie_linii(t_adr,nr);
    getch();
return 0;
}
void scrie_linii(char * tp[ ],int n)
{ int i;
for(i=0; i<n; i++)
if(tp[i] != NULL)
printf("%s\n",tp[i]);
}
void ordoneaza_linii(char * tp[ ], int n)
{ int i, sortat=0;
char * aux;
while(!sortat)
{ sortat=1;
for(i=0; i<n-1; i++)
if(strcmp(tp[i], tp[i+1]) > 0)
{ aux=tp[i];
tp[i]=tp[i+1];
tp[i+1]=aux;
sortat=0;
}
}
}
int citeste_linii(char * tp[ ])
{ int i=0;
char buf[80];
gets(buf);
while(*buf != '\0')
{ tp[i]=strdup(buf);
if (tp[i]==NULL)
{ printf(“Alocare dinamica – strdup() – esuata!\n”);
exit(1);
}
i++;
gets(buf);
}
return i;
}