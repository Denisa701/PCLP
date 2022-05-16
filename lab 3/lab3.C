#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main ()
{
    const int nr=40;
    int v[nr];
    int n;


    printf("introduceti numarul de elemente al vectorului ");
    scanf("%d",&n);

    for(int i=0; i<n;i++)
    {
        printf("Elementul %d al vectorului ", i);
        scanf("%d",&v[i]);
    }
  int m;
//    printf("Introduceti o valoare de prag ");
//    scanf("%d",&m);
    for(int i=0; i<n;i++) //b. i+=2
    {
       if(v[i]>=m)
        {
            printf("Elementul de pe pozitia %d este %d si este mai mare decat m\n", i, v[i]);
        }

//        for(int j=;j<=v[i];j++)
//        {
//            if(v[i]%j==0)
//                d++;
//        }
//
//        v[i]=d;
    }
        for(int i=0;i<n;i=+2)
        {
            printf("%d ",v[i]);
        }

//ex 2
//int j=0;
//int k=0;
//int f[nr],g[nr];
//    for(int i=0; i<n;i++)
//    {
//        if(i%2==0)
//        {
//                f[j++]=v[i];
//        }
//        else
//        {
//                g[k++]=v[i];
//        }
//    }
//    printf("elementele de pe pozitii pare ");
//    for(int i=0;i<n/2;i++)
//        printf("%d ",f[i]);
//    printf("\nelementele de pe pozitii impare ");
//     for(int i=0;i<n/2;i++)
//        printf("%d ",g[i]);
//ex 3
//int w[nr],z[nr];
//int m,k=0;
//bool ok=false;
//
//    for(int i=0;i<n;i++)
//    {
//        m=v[i];
//        int d=0;
//        for(int j=0;j<n;j++)
//        {
//            if(m==v[j])
//            {
//                 d++;
//                 ok=true;
//            }
//
//
//        }
//        if(ok==true)
//        {
//            w[k++]=d;
//            z[k++]=m;
//        }
//
//        ok=false;
//
//    }
//
//    for(int i=0; i<k;i++)
//    {
//        printf("%d ",w[i]);
//    }
//    printf("\n");
//    for(int i=0; i<k;i++)
//    {
//        printf("%d ",z[i]);
//    }

//ex 6
//int p;
//int m;
//printf("Introduceti numarul permutarilor ");
//scanf("%d",&p);
//    for(int i=0;i<p;i++)
//    {
//        m=v[n-1];
//        for(int j=n-1;j>0;j--)
//        {
//            v[j]=v[j-1];
//        }
//        v[0]=m;
//
//    }
//    printf("\n");
//
//    for(int i=0;i<n;i++)
//    {
//        printf("%d ",v[i]);
//    }

}

