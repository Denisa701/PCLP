#include <stdio.h>
int main(void)
{ int aux, n, x[10], i, j, k;
printf("Cu cate numere lucrati? ");
scanf("%d", &n);
printf("Tastati numerele:\n");
for(i=0; i<n; i++)
{printf("x[%d]=", i);
scanf("%d", &x[i]);
}
for(i=1; i<n; i++)
{for(j=0; j<i && x[j]<=x[i]; j++)
; /*instrucţiune vidă: se caută primul element ce nu
respectă relaţia de ordine*/
aux=x[i]; /*se salvează valoarea ce urmează a fi inserată*/
if(x[j]>x[i]) /*inserarea se va face pe poziţia j*/
for(k=i-1; k>=j; k--) x[k+1]=x[k]; /*deplasare la dreapta*/
x[j]=aux; /*inserarea valorii salvate*/
}
printf("Tabloul ordonat crescator este:\n");
for(i=0; i<n; i++) printf("%d ", x[i]);
printf("\n");
return 0;
}