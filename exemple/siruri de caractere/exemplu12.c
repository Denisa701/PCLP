#include<stdio.h>
#include <string.h>
int separare(char s[], char a[][20]);
void afisare(char a[][20], int k);
void ordonare(char a[][20], int k);
void main (void)
{ 
    char text[101],rez[20][20]; /* rez- tablou de siruri, memoreaza cuvintele*/
    int nr,i;
    puts("Scrieti textul ce trebuie prelucrat (max. 100 de caractere):");
    gets(text);
    nr=separare(text,rez);
    puts("\nCuvintele din text sunt:");
    afisare(rez,nr);
    ordonare(rez,nr);
    puts("\nCuvintele ordonate alfabetic sunt:");
    afisare(rez,nr);
}

int separare(char s[], char a[][20]) /*separa cuvintele*/
{ 
    int k=0;
    char *p, separator[]=" ,.";
    p=strtok(s,separator);
    while(p)
    {
        strcpy(a[k],p);
        k++;
        p=strtok(NULL,separator);
    }
    return k; /*numarul de linii completate in tablou*/
}
void afisare(char a[][20], int k) /*afiseaza cuvintele*/
{ 
    int i;
    for(i=0;i<k;i++)
    puts(a[i]);
}
void ordonare(char a[][20], int k)/*ordoneaza cuvintele*/
{   
    int schimbare,i;
    char aux[20];
    do
    { 
        schimbare=1;
        for(i=0;i<k-1;i++)
            if (strcmp(a[i],a[i+1])>0)
            {
                strcpy(aux,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],aux);
                schimbare=0;
            }
    }while(!schimbare);
}