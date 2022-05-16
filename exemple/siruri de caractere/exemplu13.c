#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
int main(void)
{ 
    char * t[4];
    t[0]="luni";
    t[1]="312";
    t[2]="AB";
    t[3]=NULL;
    printf(" t=%p\t t+1=%p\t t+2=%p\t t+3=%p\n", t, t+1, t+2, t+3);
    printf(" t[0]=%p\t t[1]=%p\t t[2]=%p\t t[3]=%p\n",t[0], t[1], t[2], t[3]);
    getch();
    printf(" Sirurile sunt:\n");
    printf(" sir0=%s\t sir1=%s\t sir2=%s\n",t[0], t[1], t[2]);
    printf(" Literele de inceput sunt:\n");
    printf(" Pt_sir0=%c\t Pt_sir1=%c\t Pt_sir2=%c\n",*t[0], *t[1], *t[2]);
    printf(" Literele de pe a doua pozitie sunt:\n");
    printf(" Pt_sir0=%c\t Pt_sir1=%c\t Pt_sir2=%c\n",*(t[0]+1), *(t[1]+1), *(t[2]+1));
    getch();
    return 0;
}