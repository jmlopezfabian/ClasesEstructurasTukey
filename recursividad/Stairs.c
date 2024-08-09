#include <stdio.h>

int ways = 0;

void waysClimbStairs(int n, int act){
    //Casos base
    if(act == n){
        ways += 1;
        return;
    }else if(act > n){
        return;
    }

    waysClimbStairs(n, act + 1);
    waysClimbStairs(n, act + 2);
}


int main(){
    int n = 5;
    waysClimbStairs(n, 0);
    printf("%d", ways);
}