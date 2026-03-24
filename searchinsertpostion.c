#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    int found=0;
    int index =0;

    for(int i =0 ; i < numsSize ; i++){
       if(target >nums[i]){

         if(target == nums[i]){
            found =1 ;
            return i ;
            break;
        }
        else{
            index++;
            continue;
        }
        

       }
       else{
        break;
       }
       
        
    }
    if (found == 0){
        return index;
        

    }
   
    
}

// int main() {
//     int nums[] = {1, 3, 5, 6};
//     int size = sizeof(nums) / sizeof(nums[0]);
//     int target;

//     printf("Enter target: ");
//     scanf("%d", &target);

//     int result = searchInsert(nums, size, target);

//     printf("Position: %d\n", result);

//     return 0;
// }
