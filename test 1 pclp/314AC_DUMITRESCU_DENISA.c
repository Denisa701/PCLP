// 314AC, Dumitrescu Denisa
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

 int suma (int n)
 {
     int s;
     while(n>=10)
     {
         s=0;
            while(n!=0)
        {
           s=s+n%10;
           n=n/10;

        }
        n=s;
     }
     return n;

 }
void functie(int v[100], int *p, int *n)
{
    int d=8;
    for( int i=d;i>0; i--)
    {
        int r=1;
        int k=v[i];
        while(k!=0)
        {
            r++;
            k=k/10;
        }
        int max=0;
        if(r>max)
        {
            max=r;
            (*p)=i;
            (*n)=v[i];
        }

    }


}

void vector_extins(int v[],int poz,int m)
{
    int cate_nr, n=8;
    cate_nr=n/poz;
    for(int i=n; i<n+(cate_nr+1)*(m-1); i++)
        v[i]=0;
    for(int i=0; i<n+(cate_nr+1)*(m-1); i=i+m+poz)
    {
        for(int t=0; t<m; t++)
            for(int j=n+(cate_nr+1)*(m-1)+1; j>i*poz; j--)
                v[j+1]=v[j];
        for(int k=i; k<(i+1)*m; k++)
            v[k]=v[i];
    }
    for(int i=0; i<n+(m-1)*(cate_nr+1); i++)
        printf("%d ", v[i]);
}

int main()
{
    int n=493193;
    printf("%d",suma(n));
    printf("\n");
    int v[8]={4, 139, 12, 5069, 103, 1125, 78, 430};
    int p=0,k=0;
    functie(v, &p, &k);
    printf("%d %d ", p , k);
    printf("\n");
    int a[100]={7, 9, 5, 4, 9, 3, 1, 6}, poz=3, m=2;
    vector_extins(a,poz,m);

}
