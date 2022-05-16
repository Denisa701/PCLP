#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   //ex1
    //citirea unui cuvant de la tastatura
    char m[100];
    char n[500];
    scanf("%s %s", m, n);
    printf("%s\n", m);
    printf("%s\n", n);

    //citirea din fisier
    FILE *f = fopen("1.txt", "rt");
    if(f == NULL)
        printf("nu e bine");

    char v[200];
    fgets(v, 200, f);
    fclose(f);

    //scrierea in fisier
    f=fopen("1.txt", "w");

    char *cuvant=strtok(v, " ");
    while(cuvant)
    {
        char p[50];
        strcpy(p,cuvant);
        if(strcmp(m,cuvant)==0)
            strcpy(p,n);
        fprintf(f,"%s",p);
        fprintf(f,"%s"," ");
        cuvant=strtok(NULL, " ");
    }
   
    fclose(f);
    return 0;

}

