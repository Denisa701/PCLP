#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *ex5(char sir[100])
{
    char aux[100];
    strcpy(sir;aux);
    for(int i=0; i<strlen(sir)-1; i++)
    {
        for(int j=0;j<strlen(sir); j++)
        {
            aux[j]=sir[i];
        }
        
    }
    return aux;
}

//ex 1
int main()
{
    char v[100];
    int n=0;
   
   /*do
    {
    
        scanf("%c", &v[n]);
        
    } while(v[n]!='\0');
    
    for(int i=0; i<n; i++)
    {
        printf("%c", v[i]);
    }
    printf("\n");

    scanf("%s", v);
    printf("%s", v);
    printf("\n");
    int m;
    m=strlen(v);
    printf("%d",m);
    printf("\n");*/

    //ex 3
    /* 
    int age1, age2;
    char sir1[50], sir2[50];
    printf("Adaugati primul nume: ");
    scanf("%s", sir1);
    printf("Adaugati varsta primului: ");
    scanf("%d", &age1);
    printf("Adaugati al doilea nume: ");
    scanf("%s", sir2);
    printf("Adaugati varsta celui de al doile: ");
    scanf("%d", &age2);
    if(strcmp(sir1, sir2)!=0)
    {
        if(age1>age2)
        {
            printf("%s", sir2);
            printf("\n");
        }
        else 
        {
            printf("%s", sir1);
            printf("\n");
        }
        if(age1==age2)
        {
            printf("%s %s", sir1, sir2);
            printf("\n");
        }
    }
    */
   //ex 4
   /*
    char sir1[50], sir2[50], sir3[50], sir4[50];
    printf("Adaugati sir1: ");
    scanf("%s", sir1);
    printf("Adaugati sir2: ");
    scanf("%s", sir2);
    printf("Adaugati sir3: ");
    scanf("%s", sir3);
    strcpy(sir4,strcat(sir1,sir2));
    printf("%s", strcat(sir4,sir3));
    printf("\n");
    */
   //ex5
   char s[100];
   printf("%s",ex5(s));
}