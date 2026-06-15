#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x == 1 || x == 0){
            return x;
        }

        int left = 1;
        int right = x;
        int ans = 0;
        while(left <= right ){

        int mid = left + (right - left)/2;

        long long square = LLONG_MAX * mid * mid;
        if(square == x){
            return mid;
        }

        else if (square < x)
        {   ans = mid;
            left = mid + 1;
        }
        else if (square > x)
        {
            right = mid - 1;
        }
        }   
     return ans;
    }
   
};