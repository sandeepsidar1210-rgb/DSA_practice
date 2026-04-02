#include <stdio.h>
#include <stdlib.h>
int maxProfit(int* prices, int pricesSize) {
    int min = prices[0];  
    int index=0;
    for(int i =0; i<pricesSize ;i++){
        if(prices[i]< min){
            min = prices[i];
            index = i;
        }
}
    int max = prices[index];
    for(int j = index+1 ; j <pricesSize ;j++){
        if(prices[j] > max){
            max = prices[j];
        }
    }
    return (max-min);
}
