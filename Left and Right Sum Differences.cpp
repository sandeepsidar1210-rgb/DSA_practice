#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        vector <int> ans;
        int leftsum =0;
        int rightsum =0;
        int totalSum = 0 ;

        int n = nums.size();
        for(int i = 0 ; i< n ; i++){
            totalSum = totalSum + nums[i];
        }

        for (int i = 0; i < n ; i ++){
            rightsum = totalSum - nums[i] - leftsum;
            ans.push_back(abs(leftsum - rightsum));
            leftsum = leftsum + nums[i];

        }

        return ans;

    }
};


int main(){

}