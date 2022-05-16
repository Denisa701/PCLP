#include<stdio.h>
#include<math.h>

struct clx { float re; float im;}; /* definire tip */
typedef struct clx NR_CLX;

NR_CLX rezultat (float x, float y) /*NR_CLX definit anterior cu typedef*/
{
    NR_CLX z;
    z.re = x;
    z.im = y;
    return z;
}

float real(NR_CLX z)
{ 
    return z.re;
}

float imaginar(NR_CLX z)
{
    return z.im;
}

void conjugare(NR_CLX *p)
{
    p->im = -p->im;
}

int main()
{
    float zi,zr;
    NR_CLX z, *p;
    zr = 37.0;
    zi = 6.0;
    z = rezultat(zr,zi);
    printf("z %f %f\n", real(z), imaginar(z));
    p = &z;
    conjugare(p);
    printf("p %f %f\n", real(*p), imaginar(*p));
    printf("z %f %f\n", real(z), imaginar(z));
    z.im = 5;
    printf("p %f %f\n", real(*p), imaginar(*p));
    printf("z %f %f\n", real(z), imaginar(z));
    p->im = p->im + 0.666;
    printf("p %f %f\n", real(*p), imaginar(*p));
    printf("z %f %f\n", real(z), imaginar(z));
    z.im=z.im- 0.666;
    printf("p %f %f\n", real(*p), imaginar(*p));
    printf("z %f %f\n", real(z), imaginar(z));
}