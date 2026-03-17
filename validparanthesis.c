// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>

// bool isValid(char* s) {

//     for(int i =0; i<strlen(s) ; i++){
//         if (s[i]=='(' || s[i]=='{' || s[i]=='['){
//             if(s[i]=='('){
//                 if(s[i+1]==')'){
//                     continue;
//                 }
//                 else{
//                     return false;
//                 }
//             }
//              if(s[i]=='{'){
//                 if(s[i+1]=='}'){
//                     continue;
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             if(s[i]=='['){
//                 if(s[i+1]==']'){
//                     continue;
//                 }
//                 else{
//                     return false;
//                 }
//             }

//             return true;
//         }
//         else{
//             return false;
//         }
        
//     }
    
    
// }


// int main(){
//    char paran[100];
//     printf("enter the input the brackets (),[],{}");
//     scanf("%99s",paran);

//    printf("%s\n", isValid(paran) ? "true" : "false");




// }




#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char s[]) {
    char stack[1000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            top++;
            stack[top] = ch;   // push opening bracket
        } else {
            // closing bracket: stack must not be empty
            if (top == -1) return false;

            // check matching pair
            if ((ch == ')' && stack[top] == '(') ||
                (ch == '}' && stack[top] == '{') ||
                (ch == ']' && stack[top] == '[')) {
                top--; // pop
            } else {
                return false;
            }
        }
    }

    return top == -1; // all opened brackets should be closed
}

int main() {
    char paran[1000];

    printf("Enter brackets: ");
    scanf("%999s", paran);

    if (isValid(paran))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}