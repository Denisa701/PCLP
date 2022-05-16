#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct FIRMA
{
    float nr;
    char *localitate;
};
typedef struct FIRMA firma;

struct ANGAJAT
{
    char *nume;
    float varsta;
    firma Fi;
};

void citire( struct ANGAJAT p[100], int *n)
{
    scanf("%d", n);
    for(int i=0 ; i<(*n) ; i++)
    {
        p[i].nume = malloc(sizeof(char) * 60);
        p[i].Fi.localitate = malloc(sizeof(char) * 60);
        printf("introduceti datele persoanei %d: ", i);
        scanf("%s %f %s %f",p[i].nume, &p[i].varsta, p[i].Fi.localitate, &p[i].Fi.nr );  
    } 
}

void afisare( struct ANGAJAT p[100], int *n)
{
    FILE *f;
    f = fopen("dosar_angajati.txt","w");
    if(f==NULL)
        printf("ceva nu e bine");
    for(int j=0; j<(*n);j++)
    {
        fprintf(f,"%s %f %s %f \n", p[j].nume, p[j].varsta, p[j].Fi.localitate, p[j].Fi.nr);
    }
    fclose(f);
}

void adaugare(struct ANGAJAT p[100], int m)
{    
    for(int i=0; i<m; i++)
    {
        //printf("Andaugati angajatul cu nr %d: ", i);
        scanf("%s %f %s %f",p[i].nume, &p[i].varsta, p[i].Fi.localitate, &p[i].Fi.nr);
    }

    FILE *f;
    f = fopen("dosar_angajati.txt","a");
    if(f==NULL)
        printf("ceva nu e bine");
    for(int j=0; j<m;j++)
    {
        fprintf(f,"%s %f %s %f \n", p[j].nume, p[j].varsta, p[j].Fi.localitate, p[j].Fi.nr);
    }
    fclose(f);

}



int main()
{
    struct ANGAJAT p[100];
    int n, q;
    citire(p,&n);
    afisare(p, &n);
    int m;
    printf("Cati angajati se mai adauga?");
    scanf("%d", &m);
    adaugare(p,m);
}