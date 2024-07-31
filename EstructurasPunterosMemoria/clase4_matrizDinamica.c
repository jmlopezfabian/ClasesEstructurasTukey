#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int filas;
    printf("Cantidad de filas: ");
    scanf("%d", &filas);

    int** matriz = (int**) calloc(filas, sizeof(int*));

    int* tam_filas = (int*) malloc(filas * sizeof(int));

    for(int i=0; i<filas; i++){

        int num_elementos;
        printf("\nCantidad de elementos en fila %d: ", i+1);
        scanf("%d", &num_elementos);

        tam_filas[i] = num_elementos;
        
        int* renglon = (int*) calloc(num_elementos, sizeof(int));
        
        matriz[i] = renglon;
        for(int j=0; j<num_elementos; j++){
            matriz[i][j] = rand() % 10;
        }
    }
    
    for(int i=0; i<filas; i++){
        printf("\n");
        for(int j = 0; j<tam_filas[i]; j++){
                printf("%d ", matriz[i][j]);
        }
    }
}