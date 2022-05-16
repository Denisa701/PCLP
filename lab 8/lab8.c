
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//#include<conio.h>

//definirea structurilor
struct timp
{
    int ora;
    int minut;
    int secunda;
};

typedef struct timp NR_timp;

struct cerc
{
     int raza;
};

struct patrat
{
     int lungime;
};

struct dreptunghi
{
     int lungime;
     int latime;
};

union dimensiune
{
     struct cerc c;
     struct dreptunghi d;
     struct patrat p;
};

struct fig_geom
{
     char nume;
     union dimensiune d;
};

typedef struct fig_geom Figura;

//structuri ex 7
/*
struct autor 
{
    char *nume;
    char *prenume;
    char *gen;
};

struct carte
{
    char *titlu;
    int *anul;
    struct autor autorul;
};*/

//structura ex 8

struct persoana
{
    char *nume;
    char *prenume;
    char *CNP;
};
typedef struct persoana pers;
// definirea functiilor
//functie problema 2

NR_timp suma_timp( NR_timp m1, NR_timp m2)
{

    NR_timp s;

    s.ora= m1.ora + m2.ora;
    s.minut= m1.minut + m2.minut;
    s.secunda= m1.secunda + m2.secunda;
    if(s.secunda >= 60)
    {
        s.secunda=s.secunda-60;
        s.minut++;
    } 
    if(s.minut >= 60)
    {
        s.minut=s.minut-60;
        s.ora++;
    }
    if(s.ora >= 24)
    {
        s.ora=s.ora-24;
    }

    return s;
}

//functii problema 5

int aria_cerc( struct cerc c)
{
    int ac;
    ac = M_PI * c.raza * c.raza;
    return ac;
}
int perimetru_cerc(struct cerc c)
{
    int pc;
    pc= 2 * M_PI * c.raza;
    return pc;
}
int aria_dreptunghi( struct dreptunghi d)
{
    int ad;
    ad=d.latime * d.lungime;
    return ad;
}

int perimetru_dreptunghi( struct dreptunghi d)
{
    int pd;
    pd=(d.lungime + d.latime) * 2;
    return pd;
}

int perimetru_patrat(struct patrat p)
{
    int pp;
    pp=p.lungime * 4;
    return pp;
}

int aria_patrat( struct patrat p)
{
    int ap;
    ap=p.lungime * p.lungime;
    return ap;
}

//functiile problemei 8
/*void citire_ex8(pers p[100])
{
    int n;
    printf("Introduceti numarul de persoane: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        char a,b,c;
        printf("Introduceti numele persoanei: ");
        scanf("%c", &a);
        pers p[i].nume=a;
        printf("Introduceti prenumele persoanei: ");
        scanf("%c", &b);
        pers p[i].prenume=b;
        printf("Introduceti CNP ul persoanei: ");
        scanf("%c", &c);
        pers p[i].CNP=c;
    }

}*/

int Citeste(struct persoana p[])
{
    int i,n;
    printf("Dati numarul de persoane: "); 
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        char *a,*b,*c;
        a = malloc(sizeof(char) * 60);
        if (!a) exit(1);
        //printf("debug1\n");
        memset(a, 0, 60);
        //printf("debug2\n");
        fflush(stdin); // !! se poate folosi si flushall() !!
        printf("Dati numele persoanei nr. %d: ",i); 
        scanf("%s", a);
        //printf("debug3\n");
        p[i].nume = malloc(sizeof(char) * 60);
        strcpy(p[i].nume, a);

        b = malloc(sizeof(char) * 60);
        printf("Dati prenumele lui %s: \n",p[i].nume);
        scanf("%s",b);
        p[i].prenume = malloc(sizeof(char) * 60);
        strcpy(p[i].prenume, b);

        c= malloc(sizeof(char) * 60);
        printf("Dati CNP ul lu %s: \n", p[i].nume);
        scanf("%s", c);
        p[i].CNP = malloc(sizeof(char) * 60);
        strcpy(p[i].CNP, c);


        //gets(p[i].prenume); 
        //fflush(stdin);
   }
    return n;
} 

void afisare_ex8( struct persoana p[100], int n)
{
    printf("Daca asta-i zero urmeaza pointers hell %d\n", n);
    for(int i=0;i<n; i++)
    {
        printf("%s %s %s\n", p[i].nume, p[i].prenume, p[i].CNP);
    }
}


int main(void)
{

    // ex 2
/* NR_timp m1, m2;
    NR_timp s={0, 0, 0};
    printf("Introduceti doua ore( ora minut secunda)");
    scanf("%d %d %d", &m1.ora, &m1.minut, &m1.secunda);
    scanf("%d %d %d", &m2.ora, &m2.minut, &m2.secunda);
    NR_timp suma = suma_timp(m1, m2);
    printf("%d %d %d", suma.ora, suma.minut, suma.secunda);
*/

    //ex 5 
/*
    Figura f;
    int a, b; 
    char n;

    printf("Introducetii o figura geometrica dupa cum urmeaza: c pentru cerc, p pentru pătrat, d pentru dreptunghi: ");
    scanf("%c", &n);
    f.nume=n;
    //printf("\n %c \n", f.nume);
    printf("Introduceti dimensiunile:pentru cerc se va preciza rază, pentru pătrat lungime (lăţimea va fi completată automat!), iar pentru dreptunghi lungime şi lăţime: ");
    if(f.nume=='c')
    {
        scanf("%d", &a);
        f.d.c.raza = a;
        //printf("\n %d \n", f.d.c.raza);
        fflush(stdin);
        printf("Aria cercului este: %d \n", aria_cerc(f.d.c));
        printf("Perimetrul cercului este: %d \n", perimetru_cerc(f.d.c));
    }

    if(f.nume=='p')
    {
        scanf("%d", &a);
        f.d.p.lungime = a;
        //printf("\n %d \n", f.d.p.lungime);
        fflush(stdin);
        printf("Aria patratului este: %d \n", aria_patrat(f.d.p));
        printf("Perimentrul patratului este: %d \n", perimetru_patrat(f.d.p));
    }
    if(f.nume=='d')
    {
        scanf("%d %d", &a, &b);
        f.d.d.lungime = a;
        f.d.d.latime = b;
        //printf("\n %d %d \n", f.d.d.lungime, f.d.d.latime);
        fflush(stdin);
        printf(" Aria dreptunghiului este: %d \n", aria_dreptunghi(f.d.d));
        printf("Perimetrul dreptunghiului este: %d \n", perimetru_dreptunghi(f.d.d));
 
    }
*/
    //ex 8
    struct persoana p[100];
    int n = Citeste(p);
    afisare_ex8(p,n);

    return 0;
}
