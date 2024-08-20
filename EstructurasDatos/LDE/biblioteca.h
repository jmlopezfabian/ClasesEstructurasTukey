#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Persona{
    int edad;
    float estatura;
}Persona;

typedef struct Nodo{
    Persona* p;
    struct Nodo* sig;
    struct Nodo* ant;
    int val;
}Nodo;

typedef struct Lista{
    Nodo* head;
    int size;
}Lista;

Persona* crearPersona(int edad, float estatura){
    Persona* p = (Persona *) malloc(sizeof(Persona));

    p->edad = edad;
    p->estatura = estatura;

    return p;
}

Nodo* crearNodo(Persona* p){
    Nodo* nuevo_nodo = (Nodo*) malloc(sizeof(Nodo));
    nuevo_nodo->p = p;
    nuevo_nodo->sig = NULL;
    nuevo_nodo->ant = NULL;

    return nuevo_nodo;
}

Lista* crearLista(){
    Lista* nueva_lista = (Lista*) malloc(sizeof(Lista));
    nueva_lista->size = 0;
    nueva_lista->head = NULL;
    return nueva_lista;
}

bool isEmpty(Lista* l){
    if (l->head == NULL){
        return true;
    }
    return false;
}

void insertarAlInicio(Lista *l, Nodo* nuevo_nodo){
    if(isEmpty(l)){
        l->head = nuevo_nodo;
    }else{
        nuevo_nodo->sig = l->head; 
        l->head = nuevo_nodo;
        nuevo_nodo->sig->ant = nuevo_nodo;
    }

    l->size += 1;
}

void imprimirLista(Lista* l){
    Nodo* aux = l->head;
    while(aux != NULL){
        printf("\n%d %f", aux->p->edad, aux->p->estatura);
        aux = aux->sig;
    }
}

void insertarFinal(Lista* l, Nodo* nuevo_nodo){
    if(isEmpty(l)){
        insertarAlInicio(l,nuevo_nodo);
    }else{
        Nodo* aux = l->head;
        while(aux ->sig != NULL){
            aux = aux->sig;
        }
        nuevo_nodo->ant = aux;
        aux->sig = nuevo_nodo;
    }
    l->size += 1;
}

