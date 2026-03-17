#include<stdio.h>
int singleNumber(int* nums, int numsSize) {
        int result = 0; 
        for (int i =0; i<numsSize ; i++){
            result = result ^ nums[i];
        }

        return result;
    
}

int main(){
    int nums[30000]={1,2,1,4,3,3,4};
    printf("%d",singleNumber(nums , 7));

    return 0;
}