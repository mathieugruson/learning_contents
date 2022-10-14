#include "libft.h"

/*

typedef int* int_p; // à chaque fois qu'il sera écrit int_p dans le programme, le pc lira int*
#define INTP int*; // à chaque fois qu'il sera écrit INTP dans le programme, il sera lu int*.

// autre différence : typedef subit le scope (à savoir ne s'applique que dans le fonction dans laquelle il se trouve, pas DEFINE)
int main()
{
    INTP a, b, c; // INTP est converti aussi en int*. Seul a est un pointeur sur int
    int_p d, e, f; // int_p est converti en int*. Les 3 variables sont des pointeurs sur int.  
    a = 10;
    return 0;
}


struct s_point // déclaration de la structure
{ // definition de la structure
    int x;
    int y;
};

int main(void)
{
    struct s_point a;
    struct s_point b;

    a.x = 10;
    a.y = 42;
    b = a;
    return 0;
}

*/

// manière de d'utiliser struc et typedef en même temps

typedef struct      s_point
{
    int x;
    int y;
}                   t_point; // écrire t_point va venir remplacer l'écriture de struct s_point

int main()
{
    t_point a; // qd on met t_point le programme comprend struct s_point comme au dessus
    t_point b; // idem ici. On crée ici une structure a et b
    t_point *ptr; // pour pointer sur une structure, ,il faut un pointeur de structure
    int ptr2; // pour pointer une valeur au sein de la structure, un pointeur normal suffit


    a.x = 10;
    a.y = 42;
    b = a;
    ptr2 = &a.x;
    (*ptr).x = 15; // syntaxe permettant d'acceder à l'élément x de a via ptr
    ptr->x = 19; // cette autre syntaxe permet également la même chose 
    printf("%d\n", (*ptr).y);
    printf("%d\n", a.y); // pareil qu'au dessus
    printf("%d\n", *ptr2) // ne marche pas car a contient deux int comme c'est une structure 
    
    return 0;
}


typedef struct s_list t_list;

struct s_list
{
    char *str;
    struct t_list *next; // pointeur sur une struct s_list
};

int main ()
{
    t_list *list;
    
    list = NULL; 
    list = add_link(list, "toto");
    list = add_link(list, "tata");
    list = add_link(list, "tutu");

    print_list(list);

    return 0;
}
