/* în câmpul discriminator, de tip caracter, numit tip, vom pune valoarea:
‘C’ – dacă în câmpul uniune dorim să memorăm o valoare de tip char;
‘I’ – dacă în câmpul uniune dorim să memorăm o valoare de tip int;
‘F’ – dacă în câmpul uniune dorim să memorăm o valoare de tip float.
Funcţia ce afişează conţinutul câmpului uniune va interpreta ca “eroare” orice altă
valoare caracter găsită în câmpul discriminator*/
#include <stdio.h>
#define CARACTER 'C'
#define INTREG 'I'
#define REAL 'F'

struct exemplu
{ 
    char tip; /*câmpul discriminator, de tip caracter, numit tip*/
    union informatie
    { 
        char c;
        int i;
        float f;
    }valoare; /*câmpul de tip uniune, numit valoare*/
};

void afisare(struct exemplu d)
{ 
    printf("\n Valoarea este...");
    switch ( d.tip )
    { 
        case CARACTER: printf("%c", d.valoare.c); break;
        case INTREG: printf("%d", d.valoare.i); break;
        case REAL: printf("%f", d.valoare.f); break;
        default: printf("tip necunoscut: %c\n",d.tip);
    }
}

void main(void)
{ 
    struct exemplu a;
    a.tip = CARACTER; /*vrem ca semnificatia câmpului uniune sa fie “caracter”*/
    a.valoare.c = 'B'; /*stocăm informaţia în câmpul uniune*/
    afisare(a);
    a.tip = REAL; /*vrem ca semnificatia câmpului uniune să fie “val. reală”*/
    a.valoare.f = (float) 12.34; /*stocăm informaţia în câmpul uniune*/
    afisare(a); 
    a.tip = 'x'; /*dăm o valoare greşită câmpului uniune*/
    a.valoare.i = 111; /*încercăm să stocăm o informaţie în câmpul uniune*/
    afisare( a ); /*va genera mesajul de “eroare”…*/
}