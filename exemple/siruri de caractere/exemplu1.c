#include <stdio.h>
#include <stdlib.h>
int main(void)
{ 
    int i;
    float x;
    char car;
    car='D';    
    while(car=='D' || car=='d')
    {
        printf("Tastati 2 numere: unul intreg si unul real\n");
        scanf("%d%f", &i, &x);
        printf("Numerele tastate au fost: %d si %f\n", i, x);
        printf("Continuati? (D/N):");
        scanf("%c",&car);
        fflush(stdin);
        //scanf("%c",&car); 
        /*Apare singura --> functionare defectuoasa!
        Apare precedata de fflush(stdin); --> functionare OK*/
        //scanf("%c%c",&car,&car); /*Apare in locul celor 2 anterioare --> OK*/
        //car=getche();
    }

    return 0;
}