#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct persoana {
    char* nume;
    char* prenume;
    int nr_ordine;
};
typedef struct persoana Person;


Person create_person(char* nume, char* prenume, int i) {
    Person person;
    person.nume = nume;
    person.prenume = prenume;
    person.nr_ordine = i;
    return person;
}

int main() {
    char **M ;// = calloc(sizeof(char)*30, 10);
    M[0] = "miau";
    M[1] = "pica";
    M[2] = "bacu";
    char* n = malloc(sizeof(char) * 30);
    char* p = malloc(sizeof(char) * 20);
    char c1, c2, c3, c4;
    char h[40] = "Puie moli";
    n = "Diana";
    p = h;
    printf("%ld %ld\n", sizeof(char) * 30, sizeof(p));
    char* n1 = "Drooopieeee";
    char* p1 = "+Agrio";
    Person pers, f, *v;
    pers = create_person(n, p, 0);
    f = create_person(n1, p1, 1);
    v = &f;
    printf("p %d %c %s\n", pers.nr_ordine, pers.nume[3], pers.prenume);
    printf("v %d %s %s\n", v->nr_ordine, v->nume, v->prenume);
    for (int i=0; i<3; i++) {
        /*for (int j=0; j<5; j++) {*/
            printf("%s", M[i]);
        
        printf("\n");
    }
}