#include <stdio.h>
#include <stdbool.h>
    int getSumofsquares(int n) {
    int sum=0;
    while(n>0){
        int dig = n % 10;
        sum = sum + (dig * dig);
        n = n/10;

    }
    return sum;
}

    bool isHappy(int n){
        while(n != 1 && n!= 4){
        n = getSumofsquares(n);
    }

    if(n==1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",isHappy(n));
}


    
