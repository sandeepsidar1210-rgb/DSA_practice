#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
   for(int i=0; i<= numsSize ;i++){
    int found=0;

        for(int j=0; j<numsSize; j++){
            if(nums[j]==i){
                found =1;
                break;
            }
        }

        if(!found){
            return i;
        }
   }
   return -1;

}

int main() {
    int nums[] = {3, 0, 1, 5 ,6 , 2};   // test case
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = missingNumber(nums, size);

    printf("Missing number is: %d\n", result);

    return 0;
}