//https://leetcode.com/problems/running-sum-of-1d-array/description/
#include<stdio.h>
#include<stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize){
    int* ans = (int *) malloc(sizeof(int) * numsSize);

    ans[0] = nums[0];

    for(int i=1; i<numsSize; i++){
        ans[i] = ans[i-1] + nums[i];
    }
    
    *returnSize = numsSize;
    return ans;
}