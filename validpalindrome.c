#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int alphanumeric(char c)
{
    if ((c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z') ||
        (c >= '0' && c <= '9'))
    {
        return 1;
    }
    return 0;
}

bool isPalindrome(char *s)
{ 

int left = 0;
int right = strlen(s) - 1;

while (left < right)
{
    if (!alphanumeric(s[left])) {
        left++;
        continue;
    }

    if (!alphanumeric(s[right])) {
        right--;
        continue;
    }

    if (tolower(s[right]) != tolower(s[left])){
        return false;

    }

    right--;
    left ++;
}

return true;
}

int main() {
    char str[] = "A man, a plan, a canal: Panama";

    if (isPalindrome(str))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}