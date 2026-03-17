#include <stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i =m-1;
    int j= n-1;
    int k= m+n-1;
while(i>=0 && j>=0){
    if (nums1[i] > nums2[j]){
        nums1[k]= nums1[i];
        i--;
    }
    else{
        nums1[k]=nums2[j];
        j--;
    }
    k--;
}

while(j>=0){
    nums1[k]=nums2[j];
    j--;
    k--;
}



for (int i = 0; i < nums1Size; i++) {
    printf("%d ", nums1[i]);
}
printf("\n");
}

int main(){
    int arr1[]={1,2,3,4,0,0,0,0};
    int arr2[]={5,6,7,8};

    merge(arr1, 8,4,arr2,4,4);

    
}
