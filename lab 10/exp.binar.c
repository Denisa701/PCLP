#include<stdio.h>
#include<stdlib.h>
void main(void)
{ 
    FILE *fisier;
    float a[20];
    int k,n;
    if((fisier=fopen("valori.dat", "wb"))==NULL)
    { 
        puts("Fisierul nu poate fi deschis\n");
        exit(1);
    }
    printf("Cate valori contine tabloul? ");
    scanf("%d", &n);
    printf("Tastati valori pentru elementele tabloului:\n");

    for(k=0; k<n; k++)
    {
        printf("a[%d]=",k);
        scanf("%f", &a[k]);
    }

    /*scrierea in fisier a tuturor valorilor tabloului*/
    fwrite(a, sizeof(a[0]), n, fisier);
    /* sau: fwrite(a, sizeof(float), n, fisier); */
    
    fclose(fisier);
}