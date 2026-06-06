#include <bits/stdc++.h>
#include <climits> //We use <climits> to get INT_MAX and INT_MIN, which tell us the maximum and minimum values an int can store, so we can detect overflow safely.
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long  ans = 0;
        long long num =x;
        if(num>0){
            while(num > 0 ){
                int ld = num % 10;
                num = num / 10;
                ans = ans * 10 + ld;
        }
        }else{
            num = num * -1;
            while(num > 0 ){
                int ld = num % 10;
                num = num / 10;
                ans = ans * 10 + ld;
        }

        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }

        ans = ans * -1;
    }
      return ans; 
    }
};