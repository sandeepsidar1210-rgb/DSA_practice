#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
        int x = *(int*)a;
        int y = *(int*)b;
        return x-y;
    }

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize , sizeof(int) , compare);
    
    for (int i =0; i<numsSize-1; i++){
        if(nums[i]==nums[i+1]){
            return true;
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
    