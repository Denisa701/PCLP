#include<stdio.h>
int main(void)
{ 
    int zi;
    char *nume[ ] = {"Luni","Marti","Miercuri","Joi","Vineri","Sambata","Duminica"};
    /*tablou de pointeri la siruri de caractere cu lungimi diferite*/
    do
    {
        printf("Tastati numarul zilei din saptamana al carei nume doriti sa fie afisat (1..7): ");
        scanf("%d", &zi);
    }while (zi<1 || zi>7);
    printf("Numele zilei este: %s\n", nume[zi-1]);
    return 0;
}