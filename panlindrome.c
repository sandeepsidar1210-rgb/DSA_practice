#include <stdio.h>
#include <stdbool.h>

bool ispalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    
    int original = x;
    int rev = 0, remainder;
    while (x > 0)
    {

        remainder = x % 10;
        rev = rev * 10 + remainder;
        x = x / 10;
    }
    if (rev == original)
    {
        return true;
    }
    else
    {
        return false;
    }
}

