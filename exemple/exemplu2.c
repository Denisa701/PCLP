#include <stdio.h>
#include <stdlib.h>
int main(void)
{ int *p, *q, a=1, b=2, t[3]={10,20,30};
float x=23.5, *adr;
adr=&x;
p=&a;
q=&x; /*eroare la compilare: q este pointer la int iar x este de tip float*/
p=&t[0]; /* p= 0022FF50 */
printf("Valoarea lui t[1] este: %d, identic cu %d\n", t[1], *(p+1));
q=&t[2]; /* q= 0022FF58 */
printf("Între adresele de memorie %p si %p există %d numere întregi\n", p, q,
q-p); /* pe ecran apare valoarea 2 */
q=q-2; /* q==p */
a=adr-p; /*eroare la compilare: cei 2 pointeri nu sunt de acelaşi tip*/
return 0;
}