#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int edad;
    float estatura;
}Persona;

Persona* crearPersona(){
    Persona* p1 = (Persona*) malloc(sizeof(Persona));

    p1->edad = 17;
    p1->estatura = 1.7;

    return p1;
}

void imprimirPersona(Persona p1){
    printf("%d", p1.edad);
    printf("\n%f", p1.estatura);
}