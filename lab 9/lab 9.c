#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persoana 
{
    
    int varsta;
    struct persoana * urm;
    char nume[];
};
typedef struct persoana pers;

int main ()
{
    pers* cap_lista, *p, *q;   
    int i, nr;
    printf("Câte elemente veţi înscrie in listă? ");
    scanf("%d", &nr);

    p=(pers *)malloc(sizeof(pers));
    if(p==NULL)
    {
        printf("Alocare dinamică eşuată!");
        exit(1);
    }
    printf("tastati numele: ");
    scanf("%s", p->nume);
    printf("Tastaţi varsta primului element: ");
    scanf("%d", &p->varsta);
    

    p->urm = NULL; 
    cap_lista = p;

    for ( i=2; i<=nr; i++)
    { 
        q=(pers *)malloc(sizeof(pers));
        if(q=NULL) 
        {
        printf("Alocare dinamică eşuată!");
        exit(1);
        }

        printf("Tastati numele celui de-al %d element: ", i);
        scanf("%s", q->nume);
        printf("Tastaţi varsta celui de-al %d element: ", i);
        scanf("%d", &q->varsta);
        q->urm = NULL;
        p->urm = q;
        p=q;
    }

    for (p=cap_lista, i=1; p!=NULL; p=p->urm, i++)
    {
        if((p->nume)=="George" && (p->varsta)==19)
            printf("A fost gasit");

    }

    //afisarea
    for (p=cap_lista, i=1; p!=NULL; p=p->urm, i++)
        printf("Valoarea elementului cu nr. %d este %d\n", i, p->varsta);
     for (p=cap_lista ; p!=NULL; p=q)
     {
        q=p->urm;
        free (p);
     }

}