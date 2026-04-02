#include <stdio.h>

int* countBits(int n, int* returnSize) {
    int n;
    scanf("%d", &n);

    int binary[32];
    int i = 0;

    while(n > 0){
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // print in reverse
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binary[j]);
    }

    return 0;

}
    