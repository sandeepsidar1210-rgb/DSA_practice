#include <stdio.h>
#include <string.h>
int titleToNumber(char* columnTitle) {
    int count=1;
    for (int i =0;i<strlen(columnTitle);i++){
      
        for (char j= 'A'; j<='Z' ; j++){
            if (columnTitle[i] != j){
                count = count + 1;
            }
            else{
                 break;
            }
        }
    }
    return count ;
    
}

int main(){
    char sum[]="AA";
    printf("%d", titleToNumber(sum));
}