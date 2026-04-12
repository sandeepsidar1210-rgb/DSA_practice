#include <stdio.h>
#include <string.h>

// char findTheDifference(char* s, char* t) {
//     char result =0;
//     for(int i=0; t[i]!='\0';i++){
//         result = result ^ t[i];
//     }

//     for(int i=0; s[i]!='\0' ; i++){
//         result = result ^ s[i];
//     }


//     return result;
// }

char findTheDifference(char* s, char* t) {
    int len = strlen(s);
    int visited[len];

    for(int i=0; i<len ; i++){
        visited[i]=0;
    }
    for(int i=0; t[i]!='\0' ; i++){
        int found =0;

        for(int j=0; j<len ;j++){
            if(visited[j] ==0 && s[j] == t[i]){
                visited[j]=1;
                found =1;
                break;
            }
        }
        if(!found){
            return t[i];
        }
    }
    return '\0';
}





int main() {
    char s[] = "abcd";
    char t[] = "abcde";

    char result = findTheDifference(s, t);

    if (result != '\0') {
        printf("Extra character is: %c\n", result);
    } else {
        printf("No extra character found\n");
    }

    return 0;
}