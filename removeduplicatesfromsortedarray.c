#include <stdio.h>
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize==0){
        return 0;
    }

    int m=1; //index where to put unique elements
    for (int i =1; i < numsSize; i++){
        if(nums[i]!=nums[i-1]){
            nums[m]=nums[i];// putting the unique element 
            m++;// increament of the index position
        }
       
    }
    return m; //index position will always be same as the number of unique elements

    
}