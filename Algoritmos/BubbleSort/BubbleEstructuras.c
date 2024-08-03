#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int edad;
    int altura;
}Persona;


void OrderarPorEdad_sel(Persona *personas, int n){
  for (int i=0;i<n;i++){
  	for (int j=0;j+1<n;j++){
      if(personas[j].edad > personas[j+1].edad){
        Persona temp = personas[j];
        personas[j] = personas [j+1];
        personas [j+1]=temp;
        
      }
    }
  }
}



void imprimirPersonas(Persona* personas, int n){
    for(int i=0; i<n; i++){
        printf("\nEdad: %d  -  Estatura: %d", personas[i].edad, personas[i].altura);
    }
}

int main(){
    Persona p1;
    Persona p2;
    Persona p3;
    Persona p4;
    Persona p5;

    p1.edad = 90;
    p1.altura = 1.5;
    
    p2.edad =40;
    p2.altura = 2;
    
    p3.edad = 3;
    p3.altura = 0.5;
    
    p4.edad = 120;
    p1.altura = 1.3;
    
    p5.edad = 10;
    p5.altura = 1.6;

    Persona personas[] = {p1,p2,p3,p4,p5};

    imprimirPersonas(personas, 5);

    //printf("\n\n");
    OrderarPorEdad_sel(personas, 5);

    imprimirPersonas(personas, 5);
}