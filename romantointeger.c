#include <stdio.h>
#include <string.h>

int getvalue(char c){
    if(c =='I') return 1;
    if(c =='V') return 5;
    if(c =='X') return 10;
    if(c =='L') return 50;
    if(c =='C') return 100;
    if(c =='D') return 500;
    if(c =='M') return 1000;
}

int romanToInt(char* s) {
    
    int num =0;
    for (int i=0; i<strlen(s); i++){
        int curr = getvalue(s[i]);

        if(i+1< strlen(s) && curr < getvalue(s[i+1])){
            num = num - curr;
        }else{
            num = num + curr;
        }
    }
    return num;
}


#include <stdio.h>

int romanToInt(char* s);  // function declaration

int main() {
    char s[] = "MCMXCIV";  // test case

    int result = romanToInt(s);

    printf("Integer value is: %d\n", result);

    return 0;
}