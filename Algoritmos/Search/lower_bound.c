#include <stdio.h>
#include <stdlib.h>

int lowerBound(int* arr, int n, int target){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l+r) /2;
        if(arr[mid] == target){
            return mid - 1;
        }else if(target < arr[mid]){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    return r;
}

int upperBoud(int* arr, int n, int target){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l+r) /2;
        if(arr[mid] == target){
            return mid + 1;
        }else if(target < arr[mid]){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    return l;
}

int main(){
    int nums[] = {-3,-2,-1,0,3,5};
    int n = 6;
    printf("Cantidad negativos: %d", lowerBound(nums, n, 0) + 1);
    printf("\nCantidad positivos: %d", n - upperBoud(nums, n,0));
}