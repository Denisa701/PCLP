#include <stdio.h>
#include <string.h>
void main (void)
{ 
    char str1[ ] = "The first string.";
    char str2[ ] = "The second string.";
    size_t n, x;
    puts(str1);
    puts(str2);
    while (1) /*ciclu infinit...*/
    { 
        puts("Tastaţi numărul de caractere ce trebuie comparate sau 0 pentru încheiere: ");
        scanf("%ld", &n);
        if (n <= 0) break;
        x = strncmp(str1, str2, n);
        printf("Comparând %ld caractere, strncmp() returnează: %ld\n", n, x);
    }
}