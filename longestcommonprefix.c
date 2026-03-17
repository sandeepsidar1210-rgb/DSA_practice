#include <Stdio.h>
#include <string.h>
#include <stdlib.h>



char* longestCommonPrefix(char** strs, int strsSize) {
    char *prefix = (char *)malloc( sizeof(char));
    int i =0;

    while(strs[0][i]!='\0'){
        char current = strs[0][i];

        for (int j=1; j<strsSize ; j++){
            if(strs[j][i] != current){
                prefix[i] = '\0';
                return prefix; 
            }
        }
        prefix[i] = current;
        i++;

    }
    prefix[i] = '\0';
    return prefix;
    
}

int main(){

    char *arr[] = {"hello","hell","he"};

    char *result = longestCommonPrefix(arr,3);

    printf("%s",result);
}
