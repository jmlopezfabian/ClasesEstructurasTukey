#include <stdio.h>


void odernarUltimo(int *nums, int n){
    int r = n - 1;
    int l = r - 1;

    while(l >= 0 && (nums[l] > nums[r])){
        int aux = nums[l];
        nums[l] = nums[r];
        nums[r] = aux;
        l--;
        r--;
    }
}

int main(){
    int nums[] = {3,5,6,4};
    for(int i=0; i<4; i++){
        printf("%d ", nums[i]);
    }

    odernarUltimo(nums, 4);
    printf("\n");
    for(int i=0; i<4; i++){
        printf("%d ", nums[i]);
    }
}