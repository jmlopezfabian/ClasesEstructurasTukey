#include <stdio.h>
#include <stdlib.h> //Nos permite trabajar con memoria
#include <time.h>
// *
/*

int *var = &numero;
*var acceder al valor de un puntero


*/
// &

// rand() genera numeros aleatorios entre [0,INTMAX]

/*
malloc
calloc
realloc
free
*/


int main(){

    srand(time(NULL)); //Iniciar la semilla

    int* numeros = (int*) malloc(sizeof(int) * 10);
    for(int i=0; i<10; i++){
        numeros[i] = rand() % 10;
    }

    printf("\n");
    //Malloc

    //Calloc reserva memoria y la asigna a 0

    int* numeros2 = (int*) calloc(10, sizeof(int));
    printf("\n");


    //realloc
    numeros2 = (int*) realloc(numeros2, 20 * sizeof(int));
    for(int i=0; i<20; i++){
        numeros2[i] = rand() % 10;
    }

    printf("\n");

    for(int i=0; i<20; i++){
        printf("%d ", *(numeros2+i));
    }

    free(numeros2);

    printf("\n");

    for(int i=0; i<20; i++){
        printf("%d ", *(numeros2+i));
    }

}