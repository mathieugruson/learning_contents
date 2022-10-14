#include "libft.h"


/* 

La memoire du PC est compose d'octet. Chaque octet a une adresse propre
que printf p affiche en hexadecimal du type : 0x7fff0a314e60. 
https://sebastienguillon.com/test/javascript/convertisseur.html
En la convertissant, on se rend compte que tout se suit. 

Le pointeur est une variable qui pointe vers une adresse. Il a son adresse propre, 

Il y a des biais de connaissances liees au language.
Printf s -> affiche tous les caracteres jusqua tombee sur un backslash 0;
Printf c -> affiche qu'un caractere;
prinft p -> affiche l'adresse ou la valeur est stocke par exemple. 

Dans un pointeur de pointeur, tous les elements vont se suivre : d ou l importance du '\0' pour separer les cases.
*/
int main()
{
    char    *tab[] = {"dimanche"};
	char	*tab3[] = {"lundi"};

    printf(" pointeur sur char %s\n", tab[0]);
    printf("%p\n", &tab);
    printf("%p\n", tab);
    printf("%p\n", &tab[0][0]);
    printf(" !! %p\n", &tab[0][9]);
    printf("%s\n", tab[0]);
    printf(" !! %p\n", &tab3[0][0]);
    printf("%p\n", &tab[1][1]);
/*
meme dans le cas ci dessous l'adresse de la variable tab n'a rien a voir avec l adresse vers laquelle elle pointe
*/
    char *tab1;
    tab1 = "mathieu";

    printf("%p\n", &tab1);
    printf("%p\n", tab1);
    printf("%s\n", tab1);
    printf("%p\n", (tab1+1));
    printf("%s\n", (tab1+1));

    char m;
    m = 'm';

    printf(" char simple %p\n", &m);
    printf("%c\n", m);

    return 0;
}
