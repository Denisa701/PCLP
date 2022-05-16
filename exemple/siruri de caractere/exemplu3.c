#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main (void)
{ 
    char sursa [ ] = "Şirul sursă.";
    char dest1 [80];
    char *dest2, *dest3;
    printf("sursa: %s\n", sursa);
    /* Se copiază sursa în dest1 (este OK - dest1 este adresa unui spaţiu de memorie de 80 de octeţi, deja alocat static*/
    strcpy (dest1, sursa);
    printf("dest1: %s\n", dest1);
    /* Pentru a copia sursa în dest2 trebuie alocat spaţiu de memorie!*/
    dest2 = (char *) malloc(strlen(sursa) +1); /*1 octet rezervat pentru ’/0’ */
    if (dest2 == NULL)
    { 
        printf("Alocare de memorie eşuată!");
        exit(1);    
    }
    strcpy (dest2, sursa);
    printf("dest2: %s\n", dest2);
    free (dest2); /*se eliberează memoria ce fusese alocată dinamic*/
    /* Copierea de caractere într-un şir ce nu are alocat spaţiu de memorie poate genera erori grave, dificil de depistat şi de remediat! De exemplu, este incorect să se scrie: strcpy(dest3, sursa); */
}