#include "biblioteca.h"

int main(){
    Persona* p1 = crearPersona(15,1.70);
    Nodo* n1 = crearNodo(p1);
    
    Persona* p2 = crearPersona(17,1.80);
    Nodo* n2 = crearNodo(p2);
    
    Persona* p3 = crearPersona(100,2.00);
    Nodo* n3 = crearNodo(p3);

    Lista* l = crearLista();

    insertarAlInicio(l,n1);
    insertarFinal(l,n3);
    insertarAlInicio(l,n2);

    imprimirLista(l);
}
