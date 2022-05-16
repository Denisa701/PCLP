#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct persoana
{
    char *nume;
    char *prenume;
    float varsta;
};
typedef struct persoana pers;

int main()
{
    pers p[100];
    FILE *f;
    int n;
   
    scanf("%d",&n);
    for(int i=0;i<n; i++)
    {
        p[i].nume = malloc(sizeof(char) * 60);
        p[i].prenume = malloc(sizeof(char) * 60);
        printf("introduceti datele persoanei %d: ", i);
        scanf("%s %s %f",p[i].nume, p[i].prenume, &p[i].varsta);
        
    } 
    
    f = fopen("persoane.txt","w");
    if(f==NULL)
        printf("ceva nu e bine");
    for(int j=0; j<n;j++)
    {
        fprintf(f,"%s %s %f \n",p[j].nume, p[j].prenume, p[j].varsta);
    }
    fclose(f);
}