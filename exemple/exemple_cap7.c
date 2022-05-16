#include<stdio.h>
#include<stddef.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    /* pointerii au memorat in ei calea relativa pana la locul(adresa) unde se afla numarul atribuit in codul masina
    char * p; //variabilă pointer ce poate memora adresa unei variabile de tip caracter
    char c, d; //variabile de tip caracter
    c = 'Q'; //atribuire de valoare de tip caracter
    p = &c; //în p se memorează adresa de început a zonei de memorie alocată variabilei c
    d = *p ; //în acest caz, lui d i se atribuie valoarea lui c prin intermediul adresei memorate în p; 
    printf("%c %c \n", c ,d);
   
   int *q, b,a, m=7;
    q= &m; // p memorează adresa variabilei b 
    a= *(++q); // 1) se incrementează p; 2) se atribuie lui a valoarea întreagă către care arată noua valoare a lui p 
    b= *(q++); //1) se atribuie lui a valoarea întreagă către care arată p; 2) se incrementează p 
    printf("%d %d \n", a , b); */

// la printare pointerul foloseste %p
int m=12, k=400, *p;
char b='t', a='V', *q;
p=&k;
q=&a;
printf("Adresa pt. q: %p\t Valoarea lui q: %p\n\t\t\t Valoarea de la adresa q:%c\n",&q,q,*q);
printf("---------------------------------------------------\n");
printf("Adresa pt. a: %p\t Valoarea lui a: %c\n",&a,a);
printf("Adresa pt. b: %p\t Valoarea lui b: %c\n",&b,b);
printf("---------------------------------------------------\n");
printf("Adresa pt. p: %p\t Valoarea lui p: %p\n\t\t\t Valoarea de la adresa p:%d\n",&p,p,*p);
printf("---------------------------------------------------\n");
printf("Adresa pt. k: %p\t Valoarea lui k: %d\n",&k,k);
printf("Adresa pt. m: %p\t Valoarea lui m: %d\n",&m,m);
printf("---------------------------------------------------\n");
p=p+1; /*sau p++; */
q=q+1; /*sau q++; */
printf("Adresa pt. q: %p\tValoarea lui q: %p\n\t\t\tValoarea de la adresa q:%c\n",&q,q,*q);
printf("Adresa pt. p: %p\tValoarea lui p: %p\n\t\t\tValoarea de la adresa p:%d\n",&p,p,*p);
return 0;

void *s; /* pointer universal */
int *t, r=5, o; /* pointer la int, urmat de 2 variabile de tip int */
//??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
//(int*)s = &r; /* (int*)p este o valoare de tip pointer la int */

o = *((int*)s); /* acum *((int*)p) este chiar valoarea de tip int a cărei adresă este %d a fost memorată în p */
printf("%p %d \n", s, o);


}
