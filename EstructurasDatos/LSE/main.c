#include "biblioteca.h"

int main(){
    srand(time(NULL));

    Nodo* n1 = crearNodo(1);
    Nodo* n2 = crearNodo(2);
    Nodo* n3 = crearNodo(3);
    Nodo* n4 = crearNodo(4);
    Nodo* n5 = crearNodo(5);

    Lista *l = crearLista();

    insertarInicio(l, n1);
    insertarInicio(l, n2);
    insertarInicio(l, n3);
    //3 -> 2 -> 1 -> 4

    insertarFinal(l,n4);
    
    insertarEnN(l,2,n5);
    
    imprimirLista(l);

    Lista *l2 = crearLista();

/*

    imprimirLista(l2);
    
    l2->head = l->head;


    imprimirLista(l2);

    free(l->head);

    imprimirLista(l2);


    printf("%p", l);

    printf("\n");

    printf("%p", l2);  
*/
    copiarLista(l,l2);
    free(l->head);
    imprimirLista(l2);
    printf("%p", l);
    printf("\n%p", l2);
    printf("\n%d", l2->size);


}