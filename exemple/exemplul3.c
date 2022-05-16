#include<stdio.h>

float suma (float x[ ], int nr)
{ int i;
float s = 0.0;
for(i = 0; i < nr; i++)
s += x[i];
return s;
}
/*exemplificarea modului de apelare a funcţiei*/
int main (void)
{ int i, n;
float a[100], rez;
/*...aici pot fi scrise instrucţiunile pentru citirea de la tastatură a numărului de
elemente din tablou şi a valorilor ce fac parte din acesta
...............
*/
rez = suma (a, n); /* apelarea funcţiei suma() */
*/ ...aici pot să apară alte instrucţiuni ce aparţin funcţiei main()*/
}