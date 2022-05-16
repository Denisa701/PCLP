#include<stdio.h>
void main (void )
{ 
    struct ex
    {
        int * pi;
        float * pf;
    }; /*definire tip struct ex*/
    struct ex adrese; /*declarare variabilă de tip struct ex*/
    int i = 100;
    float f;
    adrese.pi = &i;
    adrese.pf = &f;
    *adrese.pf = -32.17;
    printf("i = %d, Tot i = %d", i, *adrese.pi);
    printf("f = %f, Tot f = %f", f, *adrese.pf);
    printf("\n");

}