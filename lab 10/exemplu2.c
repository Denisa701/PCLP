#include <stdio.h>
#include <stdlib.h>
int main (void)
{ 
    int i, j, vi, vf;
    FILE *f,*g;
    //verificari 
    if ((f=fopen("INM.txt","wt"))==NULL)
    {
        puts("Fis. Pt. inmultire nu s-a deschis\n");
        exit(1);
    }
    if ((g=fopen("IMP.txt","wt"))==NULL)
    {
        puts("Fis. Pt. impartire nu s-a deschis\n");
        exit(1);
    }

    //inmultirea 
    vi=1;
    vf=5;
    while(vi<11)
    {
        for (i=1;i<11;i++)
        {
            for (j=vi;j<=vf && j<11;j++)
                fprintf(f,"%2d x %2d = %2d\t", j,i,i*j);
            fprintf(f,"\n");
        }
        vi=j;
        vf=j+5;
        fprintf(f,"\n\n");
    }
    fclose(f);

    /*tabla impartirii*/
    printf("\n\n");
    vi=1;
    vf=5;
    while(vi<11)
    {
        for (i=1;i<11;i++)
        {
            for (j=vi;j<=vf&&j<11;j++)
                fprintf(g,"%2d :%2d = %2d\t", i*j,j,i);
            fprintf(g,"\n");
        }
        vi=j;
        vf=j+5;
        fprintf(g,"\n\n");
    }
    fclose(g);
    return 0;
}