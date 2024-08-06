#include <stdio.h>

int maxProfit(int *prices, int n) {
    int max_profit = 0;
    int current_profit = 0;

    for(int c=0; c<n; c++){
        for(int v=c; v<n; v++){
            current_profit = prices[v] - prices[c];

            if(current_profit > max_profit){
                max_profit = current_profit;
                //printf("%d %d\n",prices[v], prices[c]);
            }
        }
    }
    return max_profit;
}

int maxProfit2(int *prices, int n){
    int current_profit, max_profit;
    int c = 0, v = 0;
    while(v < n && c < n){
        current_profit = prices[v] - prices[c];
        if(current_profit < 0){
            c = v;
        }
        v ++;
    }
}

int main(){
    int prices[] = {7,1,5,3,6,4};
    printf("%d", maxProfit2(prices ,6));
}
