#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
/*functie pentru compararea a 2 siruri de caractere pe baza adresei lor, cu prototip conform
cerintelor qsort()*/
int cmp_pstr(const void * a, const void * b)
{ 
    return strcmp(*((char **)a),*((char **)b));
}
/*functie pentru afisarea tuturor sirurilor ale caror adrese se afla in tabloul tp*/
void scrie_linii(char * tp[ ],int n)
{ 
    int i;
    for(i=0; i<n; i++)
        if(tp[i] != NULL)
            printf("%s\n",tp[i]);
}
int main (void)
{   
    char * t_pstr[4] = {"maine","astazi","ZEBRA","ACTOR"}; /*particularizare*/
    int nr = 4; /*particularizare*/
    puts("\n\nInitial:\n");
    scrie_linii(t_pstr,nr);
    qsort(t_pstr,nr,sizeof(char *),cmp_pstr);
    /*elementele lui t_pstr sunt adresele zonelor de memorie in care se afla sirurile de car.*/
    puts("\n\nOrdonate:\n");
    scrie_linii(t_pstr,nr);
    getch();
    return 0;
}