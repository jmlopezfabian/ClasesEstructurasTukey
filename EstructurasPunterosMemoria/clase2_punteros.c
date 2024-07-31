#include <stdio.h>
#include <stdlib.h>

//* de-referencia
//& referencia
// -> 

typedef struct{
    int edad;
    float estatura;
}Persona;

Persona crearPersona(){
    Persona nueva_persona;
    printf("Ingresa la edad: ");
    
    scanf("%d", &nueva_persona.edad);
    fflush(stdin);

    printf("Ingresa la estatura: ");
    
    scanf("%f", &nueva_persona.estatura);
    fflush(stdin);

    return nueva_persona;
}


void imprimirListaPersonas(Persona* lista_persona, int cantidad_persona){
  	for(int i=0; i<cantidad_persona; i++){
      	printf("%d", lista_persona[i].edad);
      	printf("\t	-		\t");
      	printf("%f", lista_persona[i].estatura);
        printf("\n");
    }
}

int main(){
    /*
    int numero = 5;
    printf("%d", numero);
    printf("\n");

    int* pnt_a_numero = &numero;
    printf("%d", *pnt_a_numero);

    int** pnt_pnt_numero = &pnt_a_numero;
    printf("\n");   
    printf("%d", **pnt_pnt_numero);
    */


    /*
    malloc <-
    realloc <-
    calloc 
    */
    
    //printf("%ld", sizeof(char));

    //int* numeros = (int*) malloc(12);

    int n;
    printf("De cuanto quieres tu arreglo papi: ");
    scanf("%d",&n);
    int* numeros = (int*) malloc(n * sizeof(int));

    int cantidad_personas;
    printf("De cuantas personas: ");
    scanf("%d",&cantidad_personas);

    Persona* lista_personas = (Persona*) malloc(cantidad_personas * sizeof(Persona));

    for(int i=0; i<cantidad_personas; i++){
        lista_personas[i] = crearPersona();
    }

    imprimirListaPersonas(lista_personas, cantidad_personas);
}