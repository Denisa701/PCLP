#include <stdio.h>
#include <stdlib.h>
struct element
{
    int val;
    struct element * urm;
};
typedef struct element ELEM;

void main (void)
{ 
    ELEM * cap_lista, *p, *q;
    int i, nr; /*nr = numărul de elemente ce vor fi înscrise in listă*/
    printf("Câte elemente veţi înscrie in listă? ");
    scanf("%d", &nr);
    /*se creează dinamic spaţiu de memorie pentru primul element al listei*/
    p=(ELEM *)malloc(sizeof(ELEM)); 
    /*se testează dacă alocarea a reuşit sau nu*/
    if (p==NULL)
    { 
        printf("Alocare dinamică eşuată!");
        exit(1); /*se încheie execuţia programului*/
    }
    printf("Tastaţi valoarea primului element:");
    scanf("%d", &p->val);
    p->urm = NULL; /*deocamdată este primul şi ultimul element al listei*/

    cap_lista = p; /*memorează adresa primului element din listă*/
    /*urmează crearea celorlalte nr-1 elemente ale listei*/

    for (i=2; i<=nr; i++)
    { 
        /*se crează dinamic spaţiu de memorie pentru noul element al listei*/
        q=(ELEM *)malloc(sizeof(ELEM));
        /*se testează dacă alocarea a reuşit sau nu*/
        if (q==NULL)
        { 
            printf("Alocare dinamică eşuată!");
            exit(1); /*se încheie execuţia programului*/
        }
        printf("Tastaţi valoarea celui de-al %d element: ", i);
        scanf("%d", &q->val);
        q->urm = NULL; /*noul element devine acum ultimul element al listei*/

        p->urm = q; /*stabileşte legătura dintre elementul anterior şi cel nou*/


        p=q; /*în p se memorează adresa noului element pentru ca variabila q să fie folosită la următoarea trecere prin ciclul for pentru o nouă alocare dinamică de memorie*/

    }
    /*parcurgerea listei, de la primul până la ultimul element, şi afişarea valorilor pe care le conţine*/
    for (p=cap_lista, i=1; p!=NULL; p=p->urm, i++)
        printf("Valoarea elementului cu nr. %d este %d\n", i, p->val);
    /*deoarece programul se încheie, se va elibera automat spaţiul de memorie alocat 
    anterior. Totuşi, un stil riguros de programare, impune eliberarea explicită a
    spaţiului de memorie alocat dinamic, folosind funcţia free(), ca în instrucţiunea
    for următoare*/
    for (p=cap_lista ; p!=NULL; p=q)
    { 
        q=p->urm; /*se salvează adresa următorului element*/
        free (p); /*se eliberează spaţiul de memorie alocat elementului curent*/
    }
    
    /*parcurgerea listei, de la primul până la ultimul element, şi afişarea valorilor
    pe care le conţine*/
    for (p=cap_lista, i=1; p!=NULL; p=p->urm, i++)
        printf("Valoarea elementului cu nr. %d este %d\n", i, p->val);
    /*deoarece programul se încheie, se va elibera automat spaţiul de memorie alocat
    anterior. Totuşi, un stil riguros de programare, impune eliberarea explicită a
    spaţiului de memorie alocat dinamic, folosind funcţia free(), ca în instrucţiunea
    for următoare*/

    for (p=cap_lista ; p!=NULL; p=q)
    { 
        q=p->urm; /*se salvează adresa următorului element*/
        free (p); /*se eliberează spaţiul de memorie alocat elementului curent*/
    }
}