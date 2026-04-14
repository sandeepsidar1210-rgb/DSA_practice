#include <stdio.h>

int hammingWeight(int n) {
    int binary[32];
    int i=0;

    int one_count = 0;

    while( n > 0){

        binary[i] = n % 2;
        n = n / 2;

        if( binary[i] == 1 ){
        one_count++;
        }
        i++;
    }

    return one_count;
}









int main (){
    
}