#include<stdio.h> 

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int k = m + n -1;
    int i = m -1;
    int j = n - 1;

    while(i >= 0 && j>=0){
        if(nums2[j] >= nums1[i]){
            nums1[k] = nums2[j];
            j--;

        }else{
            nums1[k] = nums1[i];
            i--;

        }
        k--;
    }

    while(j>=0){
        nums1[k] = nums2[j];
        k--;
        j--;
    }

}

int main(){
    int nums1[] = {1,2,3,0,0,0};
    int nums2[] = {2,5,6,9};

    int n = 4;
    int m = 3;

    for(int i=0; i<m+n; i++){
        printf("%d ", nums1[i]);
    }

    merge(nums1,6,m,nums2,4,n);
    
    for(int i=0; i<m+n; i++){
        printf("%d ", nums1[i]);
    }

    return 0;
}