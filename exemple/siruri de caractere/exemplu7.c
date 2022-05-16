#include <stdio.h>
#include <string.h>
void main (void)
{ 
    char buf1 [80], buf2 [80];
    size_t loc;
    printf("Tastaţi şirul în care se face căutarea: ");
    gets(buf1);
    printf("Tastaţi şirul ce conţine caracterele ce trebuie căutate: ");
    gets(buf2);
    loc = strcspn(buf1, buf2); /*returnează prima poziţie în care găseşte unul dintre caracterele cautate*/
    if ( loc == strlen(buf1) )
        printf("Nu a fost găsit nici un caracter!");
    else
        printf("Prima potrivire a fost găsită în poziţia %d\n", loc);
}