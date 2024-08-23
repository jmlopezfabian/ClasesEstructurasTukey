#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Nodo{
    struct Nodo* sig;
    int valor;
}Nodo;

typedef struct Pila{
    Nodo* top;
    int size;
}Pila;

Nodo* crearNodo(int valor){
    Nodo* nuevo = (Nodo*) malloc(sizeof(Nodo));
    nuevo->valor = valor;
    nuevo->sig = NULL;
    
    return nuevo;
}

Pila* crearPila(){
    Pila* nueva = (Pila*) malloc(sizeof(Pila));
    nueva->top = NULL;
    return nueva;
}

bool isEmpty(Pila* p){
    if(p -> top == NULL)
        return true;
    else
        return false;
}

void push(Pila* p,Nodo* nuevo_nodo){
    if(isEmpty(p) == true){
        p->top = nuevo_nodo;
    }else{
        nuevo_nodo->sig = p->top;
        p->top = nuevo_nodo;
    }

    p->size +=1;
}

Nodo* pop(Pila* p){
    if(isEmpty(p) == false){
        Nodo* nodo_retornar = crearNodo(p->top->valor);
        Nodo* aux = p->top->sig;
        p->top->sig = NULL;
        p->top = aux;
        return nodo_retornar;
    }else{
        printf("No hay nodos");
        return NULL;
    }
    p->size -= 1;
}

void imprimirPila(Pila* p){
    Nodo* aux = p->top;
    while(aux != NULL){
        printf("%d\n", aux->valor);
        aux = aux->sig;
    }
}