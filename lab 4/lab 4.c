#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
// ex 1
// int n, i=0;
// int v[100];
// printf("Introduceti un sir de numere intregi care sa se termine cu 0: ");
// int cresc=1, desc=1;
//    do
//    {
//        scanf("%d",&n);
//        v[i++]=n;
//    }
//    while(n!=0);
//
//    for(int j=0;j<i-2;j++)
//    {
//
//        if(v[j]<v[j+1])
//            cresc=1;
//        else
//        {
//            cresc=0;
//            break;
//        }
//
//        if(v[j]>v[j+1])
//            desc=1;
//        else
//        {
//            desc=0;
//            break;
//        }
//
//    }
//
//    if( desc==0 && cresc==0)
//        printf("este oarecare");
//    else
//    {
//        if(desc==1)
//            printf("este descrescator ");
//        if(cresc==1)
//            printf("este crescator ");
//    }

// ex 2
//int v[100];
//float m;
//int n,s=0;
//
//printf("Introduceti numarul de elemente ale vectorului: ");
//scanf("%d", &n);
//
//    for(int i=0;i<n;i++)
//    {
//        printf("Elmentul %d:",i);
//        scanf("%d",&v[i]);
//        s=s+v[i];
//    }
//    printf("\n");
//    m=(float)s/n;
//
//    int a=v[0];
//    int b;
//
//    for(int i=0;i<n;i++)
//    {
//        if(v[i]==m)
//            printf("media numerelor din vector a fost gasita ");
//        if(a>v[i])
//        {
//            a=v[i];
//            b=i;
//
//        }
//    }
//printf("\n");
//printf("Cel mai mic numar din vector este %d si se afla pe pozitia %d",a,b);
//printf("\n");
//    for(int i=0;i<n;i++)
//    {
//        printf("%d ", v[i]);
//    }

//ex 5
int v[100];
int n;
printf("Introduceti numarul de elemente ale vectorului: ");
scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        printf("elementul de pe pozitia %d:",i);
        scanf("%d",&v[i]);
    }



}
