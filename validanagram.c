#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    for(int i=0; i<strlen(s) ; i++){
        for (int j=0; j<strlen(t); j++){
            if (s[i]!=t[j]){
                continue;
            }
        }
    }
 
    
}