#include <stdio.h>
#include <stdlib.h>



void ordenarPrimerElemento(int *nums, int n){
    int k = 1;
    int i = 0;
    for(k; k<n; k++){
        if(nums[i] > nums[k]){
            int aux = nums[i];
            nums[i] = nums[k];
            nums[k] = aux;
            i++;
        }
    }
}


int main(){
    int nums[] = {9,1,2,3,13,15};

    for(int i=0; i<6; i++){
        printf("%d ", nums[i]);
    }

    ordenarPrimerElemento(nums, 6);

    printf("\n");

    for(int i=0; i<6; i++){
        printf("%d ", nums[i]);
    }
}