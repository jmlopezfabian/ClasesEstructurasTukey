#include <stdio.h>
#include <stdlib.h>

int binarySearch(int* arr, int obj, int n){
    int l = 0;
    int r = n - 1;

    while(l < r){
        int mid = (l + r) / 2;
        if(arr[mid] == obj){
            return mid;
        }
        else if(arr[mid] > obj){
            //izq
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    if(l > r){
        return -1;
    }
}


int main(){
	int nums[] = {-3,2,15,45,100,253};
	printf("%d", binarySearch(nums, -10, 6));
}
