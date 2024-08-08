#include <stdio.h>

void SelectionSort(int *arr, int n){
    /* 
    Hecho por:
    Grisel
    Maga
    Alan
    */
	for(int i=0; i<n-1; i++){
    int min = arr[i];
    int ind = i;
    
    for(int j=i; j<n; j++){
      if (arr[j]<min){
        min= arr[j];
        ind =j;
      }
    }
    int temp= arr[i];
    arr[i]=arr[ind];
    arr[ind]= temp;
  }
}

int main(){
    int nums[] = {2,-10,3,5,100,-10,9,10};
    int n = 8;
    SelectionSort(nums, n);

    for(int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }
}