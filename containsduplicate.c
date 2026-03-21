#include <stdio.h>
#include <stdbool.h>
bool containsDuplicate(int* nums, int numsSize) {
    for (int i =0; i<numsSize;i++){
        for(int j=i+1; j<numsSize; j++){
            if (nums[i]==nums[j]){
                return true;
                
            }
            
        }
    }
    return false; 
}
   

int main() {
    // Test case
    int nums[] = {1, 2, 3, 4, 1};  
    int size = sizeof(nums) / sizeof(nums[0]);

    // Call function
    if (containsDuplicate(nums, size)) {
        printf("Duplicates exist\n");
    } else {
        printf("No duplicates\n");
    }

    return 0;
}
    