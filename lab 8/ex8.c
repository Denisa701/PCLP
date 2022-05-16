#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<string.h>

struct persoana
{
    char nume[100];
    char prenume[100];
    char CNP[100];
};
typedef struct persoana pers;

void Citeste(struct persoana p[])
{
    int i,n;
    printf("Dati numarul de persoane: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        fflush(stdin); // !! se poate folosi si flushall() !!
        printf("Dati numele persoanei nr. %d: ",i);
        gets(p[i].nume);
        p[i].nume[n]='\0';
        printf("Dati prenumele lui %s: ",p[i].nume);
        gets(p[i].prenume);
        fflush(stdin);
   }
    //return n;
}

void afisare_ex8( pers p[100], int n)
{
    for(int i=0;i<n; i++)
        for(int j=0; j<(strlen(p[i].nume),j++)
            printf("%c \n", p[i].nume[j]);
}

int main(void)
{
    pers p[100];
    int n;
    Citeste( pers p[100]);
    afisare_ex8(pers p[100],n);

    return 0;
}
