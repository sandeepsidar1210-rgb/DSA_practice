#include <stdio.h>
int majorityElement(int* nums, int numsSize) {
    for(int i =0; i<numsSize ; i++){
        int count=0;
        for(int j =0; j<numsSize; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        if(count>numsSize/2){
            return nums[i];
        }
        
    }
    return -1;
}   