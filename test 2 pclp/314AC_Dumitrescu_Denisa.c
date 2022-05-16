//314AC Dumitrescu Denisa

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//#include<conio.h>
struct PROBA
{
    char ID;
    char ADN;
    int l;
};

struct TEST
{
    char nume;
    char ADN;
};



void complementar( char ADN[], int* a)
{
    (*a)=strlen(ADN);
    for(int i=0; i<a;i++)
    {
        if(ADN[i]=='A')
            ADN[i]='T';
         if(ADN[i]=='T')
            ADN[i]='A';
         if(ADN[i]=='G')
            ADN[i]='C';
         if(ADN[i]=='C')
            ADN[i]='G';
    }
    printf("%s",ADN);
}

    void codifica (char ADN )
{
    char ADN[50], *p;
    int n,i, c;
    c= strcspn(ADN, "ATG");
    if (c !=0)
    {
        p = strstr (ADN, "ATG");
        *p = '\0';
        strcat (ADN, p+c);
        if (strstr (ADN,"TAG")){
            p = strstr (ADN, "TAG");
            *p = '\0';
            strcat (ADN, p);
        }
        else if (strstr(ADN,"TAA")){
            p = strstr (ADN, "TAA");
            *p = '\0';
            strcat (ADN, p);
        }

        else if (strstr (ADN,"TGA")){
            p = strstr (ADN, "TGA");
            *p = '\0';
            strcat (ADN, p);
        }
    }
}
void teste( struct PROBA p, struct TEST t[])
{
    int n;
   /* int i;
    i=strcspn(ADN, complementar(ADN));*/
    
    for (int i=0;i<n; i++)
    {
        strcmp(p.ADN,t[i].ADN);
    }

}
int main()
{

    char ADN={"AAATGAACGAAAATCTGTTCGTCTAGGCCT"};
    int n;
    struct PROBA p;
    struct TEST t[];
    complementar(ADN, &n);
    printf ("%s",codifica(ADN));
    teste(p,t);
    
    return 0;
}