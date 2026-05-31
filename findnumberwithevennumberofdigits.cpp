#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_count = 0;

        for(int i = 0; i < nums.size(); i++) {
            int digit_count = 0;
            int num = nums[i];

            while(num > 0) {
                num = num / 10;
                digit_count++;
            }

            if(digit_count % 2 == 0) {
                even_count++;
            }
        }

        return even_count;
    }
};