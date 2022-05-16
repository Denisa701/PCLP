#include <stdio.h>
#include <string.h>

void main(void)
{ 
    char *loc, buf[80];
    int c;
    printf("Tastaţi şirul în care se face căutarea: ");
    //gets(buf);
    for(int i=0; buf[i];i++)
    {
        scanf("%c",&buf[i]);
    }
    printf("Tastaţi caracterul ce trebuie căutat: "); 
    fflush(stdin); 
    c = getchar();
    loc = strchr(buf, c); /*returnează adresa de memorie în care se află caracterul căutat sau NULL dacă nu îl găseşte*/
    if ( loc == NULL )
        printf("Caracterul %c nu a fost găsit!", c);
    else 
        printf("Caracterul %c a fost găsit în poziţia %ld\n", c, loc-buf);
}