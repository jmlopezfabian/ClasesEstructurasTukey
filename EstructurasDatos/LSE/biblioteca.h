#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> 

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
        nuevo_nodo->sig = l->head;
        l->head = nuevo_nodo;
    }
    l->size += 1;
    return true;
}

void insertarFinal(Lista* l, Nodo* nuevo_nod){
    Nodo* aux = l->head;
    if(l->head == NULL){
        insertarInicio(l, nuevo_nod);
        return;
    }
    while(aux ->sig != NULL){
        aux = aux->sig;
    }
    aux -> sig = nuevo_nod;
    l->size += 1;
}

void imprimirLista(Lista *l){
    Nodo* act = l->head;

    if(l->head == NULL){
        printf("Vacia\n");
        return;
    }

    while(act != NULL){
        printf("%d ", act->num);
        act = act ->sig;
    }
    printf("\n");
}

bool insertarEnN(Lista *l, int n, Nodo* nuevo_nodo){
    Nodo* act = l->head;

    if(n == l->size){
        insertarFinal(l,nuevo_nodo);
    }else if(n == 0){
        insertarInicio(l,nuevo_nodo);
    }else if(n > l->size){
        return false;
    }else{
        for(int i=0; i<n-1; i++){
            act = act->sig;
        }

        nuevo_nodo->sig = act->sig;
        act->sig = nuevo_nodo;
    }

    l->size += 1;
    return true;
}

void copiarLista(Lista *lista_origen, Lista* lista_destino){
    Nodo* aux = lista_origen->head;
    while(aux != NULL){
        Nodo* copia = crearNodo(aux->num);
        insertarFinal(lista_destino, copia);
        aux = aux->sig;
    }
    lista_destino->size = lista_origen->size;
}

