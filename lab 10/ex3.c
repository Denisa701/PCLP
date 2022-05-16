#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *f;
    int n;
    if((f=fopen("ex3","wb"))==NULL)
        {
            printf("nu ne place");
        }
    float *v;
    scanf("%d", &n);
    v = malloc(sizeof(float)* 100);
    for(int i=0; i<n; i++)
    {
        scanf("%f", &v[i]);
    }
   
    fwrite(v,sizeof(v[0]),n,f);
    fclose(f);
    float w[100];
    f=fopen("ex3","rb");
    if(f==NULL) printf("teapa");
    fread(w,sizeof(float),n,f);
    for(int j=0; j<n;j++)
    {
        printf("%f ",w[j]);
    }
    fclose(f);
    printf("\n");
}
