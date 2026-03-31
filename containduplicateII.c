// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>

// bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
//     for(int i =0; i<numsSize ; i++){
//         for(int j=i+1; j<numsSize ;j++){
//             if(nums[i] == nums[j] && abs(i-j)<=k){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    for(int i =0; i<numsSize ; i++){
        for(int j=i+1; j<numsSize && j<= k+i ;j++){
            if(nums[i] == nums[j] ){
                return true;
            }
        }
    }
    return false;
}