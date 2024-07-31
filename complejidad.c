

int maxArr(int* arr, int n){
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

void imprimirArr(int *arr, int n){
    for(int i=0; i< n / 2; i++){
        printf("%d", arr[i]);
    }
}


// 0 si no existe
// 1 si existe
int busquedaMatriz(int** matriz, int filas, int columnas, int target){
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            if(matriz[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

n -> filas
m -> columnas
// O(n * m) TC
n = 10
m = 3

30

int isPrime(int n){
    /* 
    1 primo
    0 no es primo
    */
   for(int i=2; i * i <n; i++){
        if (n%i == 0){
            return 0
        }
   }

   return 1;
}