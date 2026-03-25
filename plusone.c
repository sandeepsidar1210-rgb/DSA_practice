#include <stdio.h>
#include <stdlib.h>


int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int len = digitsSize-1;
    
    for (int i = len; i>=0 ; i--){
      if(digits[i] < 9){
        digits[i] = digits[i] + 1;
        *returnSize = digitsSize; //it returns the size of the array in the integer format.+
        return digits;

      }
      else{
       digits[i] = 0;
      }
    }

    int* newarr = (int*)calloc(digitsSize +1 ,sizeof(int)); // allocating the size of the new array .
    newarr[0]=1;

    *returnSize = digitsSize + 1;  //it returns the size of the array in the integer format.+
    return newarr;
    

    
    
}