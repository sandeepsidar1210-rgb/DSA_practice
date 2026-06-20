#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int max_water =0;

        while(left < right ){

            int area = min(height[left], height[right]) * (right - left);
            if(area > max_water){
                max_water = area;
            }

            if(height[left] > height[right]){
                right--;
            }
            else{
                left++;
            }

        }
        return max_water;
    }

};

