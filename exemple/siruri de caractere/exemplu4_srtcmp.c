#include <stdio.h>
#include <string.h>
void main (void)
{ 
    char str1[80], str2[80];
    int x;
    while (1) /* ciclu infinit; se va încheia doar la citirea unui şir vid de caractere */
    { 
        printf("Tastaţi primul şir de caractere sau şir vid pentru încheiere program: ");
        gets(str1); if ( strlen(str1) == 0 ) break;
        printf("Tastaţi al doilea şir de caractere: ");
        gets(str2);
        /* compararea celor 2 şiruri şi afişarea rezultatului */ x = strcmp(str1, str2);
        printf("strcmp(%s,%s) returnează %d\n", str1, str2, x);
    }
}