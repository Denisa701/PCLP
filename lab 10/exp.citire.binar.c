#include<stdio.h>
#include<stdlib.h>
void main(void)
{ FILE *fisier;
float a[20];
int k,n;
if((fisier=fopen("valori.dat", "rb"))==NULL)
{ puts("Fisierul nu poate fi deschis\n");
exit(1);
}
printf("Cate valori continea tabloul inscris in fisier? ");
scanf("%d", &n);
/*citirea din fisier a tuturor valorilor tabloului*/
fread(a, sizeof(a[0]), n, fisier);
/*afisarea pe ecran a valorilor citite*/
for(k=0; k<n; k++)
printf("a[%d]=%f \n", k, a[k]);
fclose(fisier);
}