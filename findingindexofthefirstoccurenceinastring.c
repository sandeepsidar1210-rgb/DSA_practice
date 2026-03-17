#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
     if (strlen(needle)==0){
        return 0;
    }
    if (strlen(needle)>strlen(haystack)){
        return -1;
    }



    for (int i=0; i<= strlen(haystack)- strlen(needle);i++){ //checking upto the index where the needle length can be found
        int j;
        for( j=0; j< strlen(needle);j++){
            if (haystack[i+j]!=needle[j]){
                break;
                //break the loop if not follow the condition...
            }
            
        }
        if(j==strlen(needle)){
            return i; //index of haystack where the needle is found.
        }
    }
    return -1;

  
    }

    int main(){
        char h[10000],n[10000];
        scanf("%s",h);
        scanf("%s",n);

        printf("%d",strStr(h,n));

        return 0;
    }
    