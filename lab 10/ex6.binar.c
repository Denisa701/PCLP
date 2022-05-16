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

void citire(pers p[10],int n)
{
    for(int i=0;i<n; i++)
    {
        p[i].nume = malloc(sizeof(char) * 60);
        p[i].prenume = malloc(sizeof(char) * 60);
        printf("introduceti datele persoanei %d: ", i);
        scanf("%s %s %f",p[i].nume, p[i].prenume, &p[i].varsta);
       
    } 
}
void afisare(pers p[10],int n)
{
    for(int i=0; i<n;i++)
    {
        // p[i].nume = malloc(sizeof(char) * 60);
        // p[i].prenume = malloc(sizeof(char) * 60);
        printf("%s %s %f",p[i].nume, p[i].prenume, p[i].varsta);
        
    }
}

int main()
{
    FILE *f;
    pers p[10];
    int n;
    scanf("%d",&n);
    // citire(p,n);
    // f= fopen("persoane", "wb")
    // fwrite(p,sizeof(p[0]),n,f);
    // fclose(f);

 pers r[10];
 float S;
    f=fopen("persoane", "rb");
    for(int i=0; i<n; i++)
    {
        r[i].nume = malloc(sizeof(char) * 60);
        r[i].prenume = malloc(sizeof(char) * 60);

    }
    
    fread(r,sizeof(r[0]),n,f);

    afisare(r,n);
    fclose(f);
}