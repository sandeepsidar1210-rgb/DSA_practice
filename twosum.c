#include <stdio.h>
int main(){
    int n,target;
    printf("enter the number of elements in the array");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements");
    for (int i=0; i<n;i++){
        scanf("%d",&arr[i]);

    }

    printf("enter the value of the target.. ");
    scanf("%d",&target);

    for (int i =0; i<n; i++){
        for (int j=i+1; j<n ; j++){
            if (arr[i]+arr[j] == target){
                printf("[ %d , %d]",i,j);}
            else{
                continue;
            }

            }
        }
    }


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// int* twoSum(int* nums, int numsSize, int target, int* returnSize){
//     int* result = (int*)malloc(2 * sizeof(int));
//     *returnSize = 2;

//     for (int i =0; i<numsSize; i++){
//         for (int j=i+1; j<numsSize ; j++){
//             if (nums[i] + nums[j] == target){
//                 result[0]=i;
//                 result[1]=j;
//                 return result;}
        
//             else{
//                 continue;
//             }

//             }
//         }
//         return NULL;
      
// }