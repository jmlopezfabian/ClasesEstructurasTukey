#include <stdio.h>

void bubbleSort(int* nums, int n){
    //TC O(n^2)
    //SP O(1)
    for(int i=0; i<n; i++){
        for(int j=0; j+1< n; j++){
            if(nums[j] > nums[j+1]){
                int aux = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = aux;
            }
        }
    }
}

int main(){
    int nums[] = {9,1,2,3,13,15};

    for(int i=0; i<6; i++){
        printf("%d ", nums[i]);
    }

    bubbleSort(nums, 6);

    printf("\n");

    for(int i=0; i<6; i++){
        printf("%d ", nums[i]);
    }
}