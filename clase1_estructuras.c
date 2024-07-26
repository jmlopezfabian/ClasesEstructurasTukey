#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int edad;
    float estatura;
}Persona;

typedef struct{
    char apellido[15];
    int cantidad_integrantes;
    Persona* integrantes;

    //Persona integrantes[2];
}Familia;

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

Familia crearFamilia(){
    Familia nueva_familia;

    printf("Ingresa el apellido: ");
    
    scanf("%s", nueva_familia.apellido);
    fflush(stdin);

    
    printf("Ingresa la cantidad de integrantes: ");
    
    scanf("%d", nueva_familia.integrantes);
    fflush(stdin);

    for (int i=0; i<nueva_familia.integrantes; i++){
        nueva_familia.integrantes[i] = crearPersona();
    }

    return nueva_familia;
}

Persona personaMayorEdad(Persona persona1, Persona persona2){
    if (persona1.edad > persona2.edad){
        return persona1;
    }else{
        return persona2;
    }
}

Persona personaMayorEstatura(Persona persona1, Persona persona2){
    if (persona1.estatura > persona2.estatura){
        return persona1;
    }else{
        return persona2;
    }
}

int main(){
    /* 
    Persona persona1 = crearPersona();

    Persona persona2 = crearPersona();

    Persona persona3 = crearPersona();

    Persona personas[3];
    personas[0] = persona1;
    personas[1] = persona2;
    personas[2] = persona3;

    
    for (int i=0; i<3; i++){
        printf("%d", personas[i].edad);
        printf("\n");
        printf("%f", personas[i].estatura);
        printf("\n");
    }

    Persona persona4 = personaMayorEdad(persona1, persona2);
    printf("%d", persona4.edad);
    printf("%f", persona4.estatura);
    */

    //Hacer una lista que contenga 2 familias
    Familia familias[2];
    for(int i=0; i<2; i++){
        familias[i] = crearFamilia();
    }

    for(int i=0; i<2; i++){
        printf("\n");
        printf("%s", familias[i].apellido);
        printf("\n");
        for(int j=0; j<2; j++){
            printf("\n");
            printf("%d", familias[i].integrantes[j].edad);
            printf("\t");
            printf("%f", familias[i].integrantes[j].estatura);
        }
    }
}