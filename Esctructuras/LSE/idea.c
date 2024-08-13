#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef struct Nodo{
    int num;
    struct Nodo* sig;
}Nodo;

typedef struct Lista{
    int size;
    Nodo* head;
}Lista;

Nodo* crearNodo(int x){
    Nodo* nuevo_nodo = (Nodo*) malloc(sizeof(Nodo));

    //nuevo_nodo->num = rand() % 10;
    nuevo_nodo -> num = x;
    nuevo_nodo->sig = NULL;

    return nuevo_nodo;
}

Lista* crearLista(){
    Lista* nueva_lista = (Lista*) malloc(sizeof(Lista));
    nueva_lista->size = 0;
    nueva_lista->head = NULL;

    return nueva_lista;
}

bool insertarInicio(Lista *l, Nodo* nuevo_nodo){
    // True si inserto correctamente / False en caso contrario
    if(l->head == NULL){
        //Lista vacio
        l->head = nuevo_nodo;
    }else{
        Nodo* aux = l->head;
        l->head = nuevo_nodo;
        nuevo_nodo->sig = aux;
        aux = NULL;
        free(aux);
    }
    l->size += 1;
    return true;
}

void insertarFinal(Lista* l, Nodo* nuevo_nod){
    Nodo* aux = l->head;
    while(aux ->sig != NULL){
        aux = aux->sig;
    }
    aux -> sig = nuevo_nod;
    l->size += 1;
}

void imprimirLista(Lista *l){
    Nodo* act = l->head;

    while(act != NULL){
        printf("%d ", act->num);
        act = act ->sig;
    }
}

int main(){
    srand(time(NULL));

    Nodo* n1 = crearNodo(1);
    Nodo* n2 = crearNodo(2);
    Nodo* n3 = crearNodo(3);
    Nodo* n4 = crearNodo(4);
    Lista *l = crearLista();

    insertarInicio(l, n1);
    insertarInicio(l, n2);
    insertarInicio(l, n3);
    //3 -> 2 -> 1 -> 4

    insertarFinal(l,n4);
    imprimirLista(l);

    printf("\n%d", l->size);
}