#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    for(int i=0; i<strlen(s) ; i++){
        for (int j=0; j<strlen(t); j++){
            if(s[i]<s[i+1]){
                char* p[1000] = s[i];
                s[i]= s[i+1];
                s[i+1]=p;
            }

             if(t[i]<t[i+1]){
                char* q[1000] = t[i];
                t[i]= t[i+1];
                t[i+1]=q;
            }

            if(s[i]==t[j]){
                continue;
            }
            else{
                return false;
            }



          
            }
        }
        return true;
    }
 
    
