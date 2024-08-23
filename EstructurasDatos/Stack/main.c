#include "biblioteca.h"

int main(){
    Nodo* n1 = crearNodo(1);
    Nodo* n2 = crearNodo(2);
    Nodo* n3 = crearNodo(3);
    Nodo* n4 = crearNodo(4);
    Nodo* n5 = crearNodo(5);
    Nodo* n6 = crearNodo(6);
    
    
    Pila* p = crearPila();

    push(p, n1);
    push(p, n2);
    push(p, n3);

    pop(p);

    push(p,n4);
    push(p,n5);

    pop(p);

    push(p,n6);

    imprimirPila(p);
}

//Implementa una cola usando dos listas
