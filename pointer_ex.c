#include<stdio.h>
#include<stdlib.h>

// un pointeur possède son adresse pro

int main()
{
    int b;
    int *a;
    a = &b;
    *a = 20;

    printf("%p\n", a); // la valeur d'un pointeur est l'adresse de ce vers quoi il pointe
    printf("%p\n", *&a); // tous les exemples ici pointent vers la même adresse 
    printf("%p\n", &*a);
    printf("%p\n", &b);

    printf("%p\n", &a); // un pointeur possède son adresse propre
    printf("%d\n", *a);
    printf("%d\n\n", b);

    // char    p[10] = "mathieu"; // écrit comme ça on peut modifier ensuite
    char    *p; // mais pas ici
    p = "mathieu"; 

    printf("adresse de p :" "%p\n", &p); // p est un pointeur qui pointe vers p. & est son adresse propre
    // printf("adresse de p :" "%p\n", &(*p+1)); => p pointe vers le premier élément du tableau mais pas d'élement qui a une adresse propore qui pointe vers le second élément

    printf("adresse vers laquelle p pointe :" "%p\n", p); // si pas de tableau, pas d'adresse
    printf("idem :" "%p\n", &*p);
    printf("idem" "%p\n", &p[0]);
    printf("%c\n", p[0]);
    printf("adresse vers laquelle pointe p + 1" "%p\n", p+1);
    printf("adresse vers laquelle poinbte p + 1" "%p\n", &p[1]);
    printf("%c\n", p[1]); // permet d'afficher la valeur char (ascii)
    printf("%d\n", p[1]); // permet d'afficher la valeur decimal (ascii)
    //printf("%s\n", p[1]); // ne marcherait pas car on désigner un point précis
    printf("%s\n", p+1); // va faire afficher tout le reste puisque on part de la mémoire 
    // p+1 = "b"; ne peut pas marcher car p+1 est une adresse mémoire
    *(p+1) = 'b'; // cela revient au même que ce qu'il y a en dessous
    p[1] = 'b';
    printf("%s\n", p);


    char *m;
    m = (char *)malloc(sizeof(char));

    printf("adresse vers laquelle p pointe :" "%p\n", m); 

   // int n;
   // n = (int)malloc(sizeof(int));
    // cela ne va pas marcher car malloc va bosser sur la mémoire directement
    return 0;
}
