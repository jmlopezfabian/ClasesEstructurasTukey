#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int edad;
    float estatura;
}Persona;

Persona crearPersona(){
    Persona nueva_persona;
    printf("Ingresa la edad: ");
    scanf("%d",&nueva_persona.edad);

    
    printf("\nIngresa la estatura: ");
    scanf("%f",&nueva_persona.estatura);

    return nueva_persona;
}

void imprimirPersona(Persona persona){
    printf("\nEdad: %d", persona.edad);
    printf("\nEstatura: %f", persona.estatura);
}

void imprimirListaPersonas(Persona* lista_persona, int cantidad_personas){
    for(int i=0; i<cantidad_personas; i++){
        imprimirPersona(lista_persona[i]);
    }
}

int main(){
    /*
    int numeros[5];

    Persona personas[3];
    for(int i=0; i<3; i++){
        personas[i] = crearPersona();
    }

    imprimirListaPersonas(personas, 3);
    */

    //int k;
    //printf("Ingresa el tamaño del arreglo: ");
    //scanf("%d", &k);

    //int* numeros = (int*) malloc(sizeof(int) * k) //void* 
    
    /* 
    float numero1 = 1;
    float numero2 = 2;
    float division = (float)1 / (float)2;
    printf("%f",division);
    */

    //Persona* lista_personas = (Persona*) malloc(sizeof(Persona) * k);
    
    /*
    malloc <- reservar la memoria
    calloc <- reservar la memoria limpia
    realloc <- ajustar

    free <- liberar memoria
    */

    /*
    for(int i=0; i<k; i++){
        lista_personas[i] = crearPersona();
    }
    imprimirListaPersonas(lista_personas, k);
    */
    
    /* 
    int k;
    printf("Ingresa el tamaño de la matriz: ");
    scanf("%d", &k);

    int** matriz = (int**) malloc(k * sizeof(int*));

    for(int i=0; i<k; i++){
        int n;
        printf("Ingresa el tamaño de la lista %d: ", i + 1);
        scanf("%d", &n);
        matriz[i] = (int*) malloc(n* sizeof(int));
    }
    */
}