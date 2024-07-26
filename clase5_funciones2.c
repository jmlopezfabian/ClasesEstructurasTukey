#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int edad;
    float estatura;
}Persona;

Persona* crearPersona(){
    Persona* nueva_persona = (Persona*) malloc(sizeof(Persona)); //Direccion de memoria
    //nueva_persona Persona*
    (*nueva_persona).edad = 10;
    (*nueva_persona).estatura = 1.7;
    
    nueva_persona->edad = 10;
    nueva_persona->estatura = 1.7;

    return nueva_persona;
}

void destruirPersona(Persona* p){
    free(p);
}

void actualizarPersona(Persona* p){

}

int main(){
    Persona* ana = crearPersona();

    printf("%d", ana->edad);
    printf("\n%f", ana->estatura);

    //realloc(ana,);

    fflush;

    destruirPersona(ana); //Liberar

    printf("\n%d", ana->edad);
    printf("\n%f", ana->estatura);
}

/*
crearPersona
eliminarPersona
actualizarPersona
*/

