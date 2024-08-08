#include <stdio.h>

int minEnArr(int *arr, int n){
    int min = arr[0];
    int pos = 0;

    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            pos = i;
        }
    }

    return pos;
}

void swap(int *x, int *y){
    int aux;
    aux = *x;
    *x  = *y;
    *y = aux;
}

int main(){
    int arr[] = {-2,3,-100,0};
    
    for(int i=0; i<4; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("%d", minEnArr(arr, 4));
    int pos = minEnArr(arr, 4);
    swap(&arr[0],&arr[pos]);

    printf("\n");

    for(int i=0; i<4; i++){
        printf("%d ", arr[i]);
    }
}

/*

int a = 10
int b = 20

int aux = a// aux  = 10
a = b  // a = 20 / b = 20
b = aux // a = 20 / b = 10


b = 10
a = 20

*/