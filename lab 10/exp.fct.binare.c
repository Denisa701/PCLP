#include<stdio.h>
#include<stdlib.h>
int main(void)
{ 
    FILE *fisier;
    float a[20];
    int k,n;
    if((fisier=fopen("valori.dat", "rb"))==NULL)
    { 
        puts("Fisierul nu poate fi deschis\n");
        exit(1);
    }
    fseek(fisier,0L,2); /*pozitionare la sfarsitul fisierului*/
    n=ftell(fisier)/sizeof(a[0]);
    fseek(fisier,0L,0); /*pozitionare la inceputul fisierului*/
    /*citirea din fisier a tuturor valorilor tabloului*/
    fread(a, sizeof(a[0]), n, fisier);
    /*afisarea pe ecran a valorilor citite*/
    for(k=0; k<n; k++)
        printf("a[%d]=%f \n", k, a[k]);
    fclose(fisier);
}