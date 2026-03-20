#include <stdio.h>
void moveZeroes(int* nums, int numsSize) {
    int m=0;
    int count=0;
    for (int i =0; i < numsSize ; i++){
        if(nums[i]!=0){
            nums[m]=nums[i];
            m++;
        }
        else{
            count++;
        }
    }

    for (int j=m; j<numsSize ;j++){
        nums[j]=0;
    }

}


int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int size = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, size);

    printf("Output: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}