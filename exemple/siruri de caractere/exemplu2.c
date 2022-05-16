#include <stdio.h>
#include <string.h>
#include<stdlib.h>


//funcţie de conversie a unui şir de caractere (text) în număr întreg (valoare de tip int).
int sir_la_intreg (char sir[ ])
{   
    int i, val_int, rez = 0;
    for(i = 0; sir[i] >= '0' && sir[i] <= '9'; i++)
    { 
        val_int = sir[i] - '0';
        rez = rez*10 + val_int;
    }
    return rez;
}

 int main( )
{
    printf("%d\n", sir_la_intreg("245"));
    printf("%d\n", sir_la_intreg("100") + 25);
    printf("%d\n", sir_la_intreg("13*5"));
    //nu este cifră!!!
}