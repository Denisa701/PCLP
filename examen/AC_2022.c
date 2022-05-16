#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct lista 
{
    char *nume;
    int cant;
};

struct produs
{
    char *nume_firma;
    int cant_disp;
    float pret;
};
typedef struct produs prod;

struct tip
{
    char *denumire;
    int nr_cantitate;
    prod P[20];
};

void ordonare(struct tip T, int n)
{
    for(int i=0; i<n;i++)
    {
        int p=i;
        for(int j=i+1; j<n-1;j++)
        {
            if(T.P[j].cant_disp > T.P[p].cant_disp)
            p=j;
            if(p!=i)
            {
                int x;
                x = T.P[p].cant_disp;
                T.P[p].cant_disp = T.P[i].cant_disp;
                T.P[i].cant_disp = x;
                char *q;
                strcpy(q , T.P[p].nume_firma);
                strcpy(T.P[p].nume_firma,T.P[i].nume_firma);
                strcpy(T.P[i].nume_firma, q);
                float d;
                d = T.P[p].pret;
                T.P[p].pret = T.P[i].pret;
                T.P[i].pret = d;
            }
        }
    }
}

void cauta(struct lista L)
{
    FILE *f=fopen("magazin","rb");
    struct tip v[];
    fread(v, sizeof(v)*20, 20, f);

    if(strcmp(p,nume)==0)
    {
           // ordonare()
    }
    
}

int main()
{

}