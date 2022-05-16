#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main ()
{
//    //ex.1
//    char l;
//    printf("Introdu o litera de la tastatura:");
//    scanf("%c",&l);
//    if( isdigit(l))
//    {
//        printf("Caracterul introdus este cifra");
//    }
//    else
//    {
//         if(l>='A' && l<='Z')
//        {
//        printf("carcaterul introdus este litera mare");
//        }
//        else
//        {
//            if(l>='a' && l<='z')
//                printf("caracterul introdus este litera mica");
//            else
//                printf("caracterul introdus este un simbol");
//
//        }
//
//    }
//    // ex 2
//    int a,b,c;
//    printf("Introduceti 3 numere:");
//    scanf("%d %d %d",&a, &b, &c);
//    if(a+b>=c && a+c>=b && b+c>=a && a>0 && b>0 && c>0)
//        {
//        printf("Numerele introduse sunt laturile unui triunghi \n");
//        if(a==b && b==c && c==a)
//            printf("Triunghiul este echilateral");
//        else
//            if(a==b || b==c || c==a )
//                printf("Triunghiul este isoscel");
//            else
//                if((sqrt(a*a+b*b)==c )||(sqrt(c*c+b*b)==a)||(sqrt(a*a+c*c)==b))
//                    printf("Triunghiu este dreptunghic");
//                else
//                    printf("Triunghiul este oarecare");
//        }
//    //ex 3
//    int n;
//    bool ok=1;
//    printf("Introdu un nr");
//    scanf("%d", &n);
//    for(int i=2;i<n/2;i++)
//    {
//        if(n%i==0)
//        {
//            printf("Numarul nu este prim");
//            ok=0;
//        }
//
//    }
//    if(ok==1)
//    printf("Numarul este prim");
//    //ex 4
//    int n;
//    printf("Introdu un nr");
//    scanf("%d", &n);
//    for(int i=1; i<=n;i++)
//        if(i%2==0)
//        printf("%d ", i);
    //ex 5


    //ex 6
//    int n, i=0,j=0;
//
//    printf("Programul se va oprin in momentul in care introduceti valoarea 0");
//
//    do
//    {   printf("Introduceti un numar:");
//        scanf("%d",&n);
//        if(n<0)
//            i++;
//        if(n>0)
//            j++;
//    }
//    while(n!=0);
//    printf("numerele pozitive au fost in numar de %d, iar numerele negative au fost in numar de %d", j,i);

//    // ex 7
//    int n;
//    do
//    {
//        scanf("%d",&n);
//    }
//    while(n>0);
//    //ex 8
//        int n;
//        char car;
//    do
//    {
//        scanf("%d",&n);
//        if(n<0)
//        {
//            printf("Doriti sa continuati?");
//
//            scanf("%c",&car);
//            if(car=="NU")
//            break;
//
//        }
//
//    }
//    while(car=="DA");



//    // ex 9
//    int s=0;
//    int n,p=1;
//    scanf("%d",&n);
//
//    for(int i=1; i<=n;i++)
//    {
//        p=p*i;
//        s=s+p;
//        printf("%d %d \n",s,p);
//
//    }
//
//    printf("%d \n",s);

//    //ex 10
//    int n;
//    printf("Numarul n trebuie sa fie pozitiv");
//    scanf("%d",&n);
//    printf("Se vor afisa cifrele: \n");
//    do
//    {
//        printf("%d \n",n%10);
//        n=n/10;
//    }
//    while(n!=0);
//
    //ex 11
//    int m;
//    for(int i=1;i<=10;i++)
//    {
//        for(int j=1;j<=10;j++)
//        {
//            m=i*j;
//            printf("%d*%d=%d ", i,j,m);
//        }
//        printf("\n");
//    }
    // ex 12
//    int n;
//    scanf("%d",&n);
//    for(int i=1; i<=n;i++)
//    {
//        for(int j=1;j<=i;j++)
//        {
//            for(int k=1;k<=i;k++)
//            printf("%d ", i);
//            printf("\n");
//
//        }
//        printf("\n");
//    }
    //ex 13
//    int n;
//    scanf("%d",&n);
//    switch(n)
//    {
//        case 1:printf("luni");break;
//        case 2:printf("marti");break;
//        case 3:printf("miercuri");break;
//        case 4:printf("joi");break;
//        case 5:printf("vineri");break;
//        case 6:printf("sambata");break;
//        case 7:printf("duminica");break;
//    }
//    if(n>7 ||n<1)
//        printf("EROARE");
    //ex 14
    int n=0;
    int s=0;
    int med;
    int m;
    while(m!=0)
    {
        scanf("%d",&m);
        n++;
        for(int i=0; i<=n; i++)
    {
        s=s+m;
    }

    }
    med=s/n;
    printf("%d", med);




}
