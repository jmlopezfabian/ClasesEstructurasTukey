#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *arr, int n, int obj){
	int i=0;
	while(i < n){
		if(arr[i] == obj)
			return i;
		i++;
	}

	return -1;
}

int main(){

	int nums[] = {3,2,1,0,-2,5};
	printf("%d", linearSearch(nums, 6, 2));
}
