#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char* s) {
        
        
    int max=0;
    for(int i =0; i < strlen(s) ;i++){
        int count=1;
        for(int j=i+1; j< strlen(s)-1 ;j++){
            if (s[i]!=s[j]){
                count++;
            }
            else{
                break;
            }

        }
        if (max<count){
            max = count;
        }
            
        }

        return max;
    
    }
    
