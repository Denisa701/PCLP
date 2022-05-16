#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cuvinte
{
    char s1[3];
    char s2[3];
    char s3[3];
    char s4[3];
};

char *comparare( struct cuvinte C)
{
   char *m;
    if(strcmp(C.s1,C.s2) < 0 && strcmp(C.s1,C.s3) < 0 && strcmp(C.s1,C.s4) < 0 )
    {        
      strcpy(C.s1,m);
    }
        if(strcmp(C.s2,C.s1) < 0 && strcmp(C.s2,C.s3) < 0 && strcmp(C.s2,C.s4) < 0 )
    {        
      strcpy(C.s2,m);
    }
    if(strcmp(C.s3,C.s2) < 0 && strcmp(C.s3,C.s1) < 0 && strcmp(C.s3,C.s4) < 0 )
    {        
      strcpy(C.s3,m);
    }

    if(strcmp(C.s4,C.s2) < 0 && strcmp(C.s4,C.s3) < 0 && strcmp(C.s4,C.s1) < 0 )
    {        
      strcpy(C.s4,m);
    }
    return m;
}

void tablou( struct cuvinte P[20], int *n )
{
    FILE *f = fopen("fisier.txt", "rt");
    (*n)=0;
    char *q, *p,*v, *l;
    while(!feof(f))
    {
        do
        {
            fscanf(f, "%s",q);
        } while (strlen(q)!=3);
        
        strcpy(q,P[*n].s1);

        do
        {
            fscanf(f, "%s",p);
        } while (strlen(p)!=3);
            strcpy(p,P[*n].s2);
        
        do
        {
            fscanf(f, "%s",v);
        } while (strlen(v)!=3);
            strcpy(v,P[*n].s3);
        
        do
        {
            fscanf(f, "%s",l);
        } while (strlen(l)!=3);
            strcpy(l,P[*n].s4);
        (*n)++;
    }
    fclose(f);
}

int main()
{
struct cuvinte P[20];
char *Q[4][4];
int n=0;
tablou(P,&n);

FILE *fb=fopen("fisier.binar","wb");
for(int i=0; i<n; i=i+4)
{
    char *a;
    int j=0;
    strcpy(comparare(P[i]), a);
    strcpy(a,Q[i][j++]);
    if(strcmp(a,P[i].s1)==0)
    {
        strcpy(P[i].s2,Q[i][1]);
        strcpy(P[i].s3,Q[i][2]);
        strcpy(P[i].s4,Q[i][3]);
    }
    if(strcmp(a,P[i].s2)==0)
    {
        strcpy(P[i].s1,Q[i][1]);
        strcpy(P[i].s3,Q[i][2]);
        strcpy(P[i].s4,Q[i][3]);
    }
    if(strcmp(a,P[i].s3)==0)
    {
        strcpy(P[i].s2,Q[i][1]);
        strcpy(P[i].s1,Q[i][2]);
        strcpy(P[i].s4,Q[i][3]);
    }

    if(strcmp(a,P[i].s4)==0)
    {
        strcpy(P[i].s2,Q[i][1]);
        strcpy(P[i].s3,Q[i][2]);
        strcpy(P[i].s1,Q[i][3]);
    }
    
}
fwrite(Q,sizeof(Q[0][0]),n, fb);
fclose(fb);
}




