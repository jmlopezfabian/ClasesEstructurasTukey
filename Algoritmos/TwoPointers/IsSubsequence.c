//https://leetcode.com/problems/is-subsequence/description/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isSubsequence(char* s, char* t) {
    int tamanio_s = strlen(s);
    int tamanio_t = strlen(t);

    int j = 0;
    int i=0;
    while(i<tamanio_s && j<tamanio_t){
        if(s[i] == t[j]){
            i ++;
        }
        j++;
    }
    return i == tamanio_s;
}