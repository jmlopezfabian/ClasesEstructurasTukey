#include <stdio.h>

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void insertionSortCreciente(int *nums, int n){
    //TC: O(n^2)
    //SC: O(1)
    for(int curr=0; curr<n-1; curr++){
        int r = curr + 1;
        int l = curr;

        while(l >= 0 && (nums[l] > nums[r])){
            swap(&nums[l], &nums[r]);
            r--;
            l--;
        }
    }
}

void insertionSortDrec(int *nums, int n){
    for(int curr=0; curr<n-1; curr++){
        int r = curr + 1;
        int l = curr;

        while(l >= 0 && (nums[l] < nums[r])){
            swap(&nums[l], &nums[r]);
            r--;
            l--;
        }
    }
}

int main(){
    
    int nums[] = {1,2,3,4};
    for(int i=0; i<4; i++){
        printf("%d ", nums[i]);
    }

    insertionSort(nums, 4);
    printf("\n");
    for(int i=0; i<4; i++){
        printf("%d ", nums[i]);
    }
}

