#include<stdio.h>
#include<math.h>


int palindrom( int n)
{
    int a=n, i=0;
    while(a!=0)
    {
        i=i*10 + a%10;
        a=a/10;
    }
    if(n==i)
    {
        return 1;
    }
    else
    {
       return 0;
    }

}

void numara_cifrele( int n, int *d, int *a, int *b, int *c)
{
    int m=n;
    while(m!=0)
    {
        (*d)++;
        m=m/10;
    }

    (*a)=n%10;
    (*b)=(n%100)/10;
    (*c)=n/100;

}

void construire(int n, int *m)
{
    int a=n;
    while(a!=0)
    {
        if((a%10)%2==0)
            (*m)=(*m)*10 + a%10;
        a=a/10;

    }
}

int numar_perfect( int n)
{
    int s=0;
    for(int i=0; i<n;i++)
    {
        if(n%i==0)
            s=s+i;
    }
    if(s==n)
        return n;
}

int main()
{

int n;
printf("Cititi numarul n de la tastatura:");
scanf("%d", &n);
//ex 1
//printf("%d",palindrom(n));

//ex5
//Numar cate cifre are n
//int d=0;
//int a,b,c;
//numara_cifrele(n,&d,&a,&b,&c);
//
//if(d>3)
//    printf("n trebuie sa aiba 3 cifre!!!");
//else
//{
//    printf("Numarul de cifre a lui n este %d \n",d);
//    if(a!=0)
//        printf("%d", a);
//    if(b!=0)
//        printf("%d", b);
//    if(c!=0)
//        printf("%d", c);
//
//}

//ex 6
//int m=0;
//construire(n,&m);
//
//if(n<0)
//    printf("Numarul n trebuie sa fie pozitiv");
//else
//    if(m==0)
//        printf("numarul nu a putut fi returnat");
//    else
//        printf("Numarul returnat este %d", m);
//

 //ex 2
printf()




}
