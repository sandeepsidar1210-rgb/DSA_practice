#include <stdio.h>
void reverseString(char* s, int sSize) {
    int len = sSize-1;
    for(int i=0; i < sSize/2 ; i++){
        char temp = s[i];
        s[i] = s[len -i];
        s[len - i] = temp;
    }
    
   
}