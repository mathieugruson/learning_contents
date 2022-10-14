#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    void *malloc(size_t size); // le size désigne le sizeofchar

    void *p = malloc(4); // ok malloc je veux 4 bytes pour stocker un int mais en réalité, on fait comme en dessous
    void *p = malloc(sizeof(int)) // on demande la taille de ce que l'on veut (par défaut un)
    void *p = malloc(10*sizeof(int)) // si on en veut en stocker plusieurs, on multiplie

    // comme malloc retourne un pointeur vide, on ne peut pas le déférencer un void pointeur
    // il faut donc écrire cela : */

    int *p = (int *)malloc(3*sizeof(int));
    *p = 2;
    *(p+1) = 4;
    *(p+2) = 6;

    printf("%p\n", p);
    printf("%d\n", *(p+1));

    char *a;
    a = (char *)malloc(sizeof(char)); 
    // le size of char désigne le nombre de bytes que l'on veut
    // a est un pointeur = on assigne une adresse à A dans la HEAP (la mémoire libre)
    printf("adresse vers laquelle p pointe :" "%p\n", a); 

    char *b;
    b = (char *)malloc(20*sizeof(char)); // le 20 désigne le nombre d'éléments que l'on veut pouvoir mettre

   // int n;
   // n = (int)malloc(sizeof(int));
    // cela ne va pas marcher car malloc va bosser sur la mémoire directement, et ici il n'y a pas de pointeurs

    free(a); // va avoir pour effet de libérer a de l'adresse mémoire dans la HEAP et effacer son contenu
}
