#include <stdio.h>
#include <stdlib.h>


void moveZeroes(int* nums, int numsSize) {
        int pos = 0;
        int i = 0;

        while(i<numsSize){
            if(nums[i] != 0 && nums[pos] == 0){
                //Swap
                int aux;
                aux = nums[i];
                nums[i] = nums[pos];
                nums[pos] = aux;
                pos++;
                i++;
            }
            else if(nums[i] == 0){
                i++;
            }else{
                i++;
                pos++;
            }
            
        }
}


int main(){
    int nums[] = {0,0,0,3,12};
    int numsSize = 5;

    for(int i=0; i<numsSize; i++){
        printf("%d ", nums[i]);
    }

    printf("\n");

    moveZeroes(nums, numsSize);

    for(int i=0; i<numsSize; i++){
        printf("%d ", nums[i]);
    }
}
