#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int *var1
*var1
*/

int sumaCinco(int* x);
void sumaCincoLista(int* lista, int n);
void imprimirLista(int* lista, int n);
int* crearListaEnterosAleatorios(int n);
float* crearLostaDecimalesAleatorios(int n);


int main(){
    srand(time(NULL));

    int num1 = 10;
    int num2 = sumaCinco(&num1);

    // num1 -> 10
    // num2 -> 15

    printf("%d", num1);
    printf("\n%d", num2);

    int numeros[5] = {1,2,3,4,5};

    
    imprimirLista(numeros, 5);


    sumaCincoLista(numeros, 5);


    imprimirLista(numeros,5);


    int* lista2 = crearListaEnterosAleatorios(20);
    imprimirLista(lista2,20);

    float* lista3 = crearLostaDecimalesAleatorios(5);
    printf("\n");
    printf("\n");
    for(int i=0; i<5; i++){
        printf("%f ", lista3[i]);
    }
}



int sumaCinco(int* x){
    *x = *x + 5;        
    return *x;           
}

void sumaCincoLista(int* lista, int n){
    for(int i=0; i<n; i++){
        lista[i] = lista[i] + 5;
    }
}

void imprimirLista(int* lista, int n){
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ", lista[i]);
    }
}

int* crearListaEnterosAleatorios(int n){
    int* lista_nueva = (int*) malloc(sizeof(int) * n);
    for(int i=0; i<n; i++){
        lista_nueva[i] = rand();
    }
    return lista_nueva;
}

float* crearLostaDecimalesAleatorios(int n){
    // 0.05 0.01 
    float* lista_nueva = (float*) malloc(sizeof(float) * n);
    for(int i=0; i<n; i++){
        lista_nueva[i] = (float) (rand() % 100) / (float)100;
    }
    return lista_nueva;
}