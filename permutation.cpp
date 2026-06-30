/*  For every number

    If already used
        Skip

    Else

        Put it into answer

        Mark as used

        Recurse

        Remove it

        Mark unused */

// This is the standard backtracking template.
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector <vector<int>> ans;
    void solve(vector <int>& num , vector <int>& temp , vector <bool>& used)
        {
            if(num.size() == temp.size()){
                ans.push_back(temp);
                return ;
            }
            else{
                for (int i=0 ; i<num.size(); i++){
                    

                    if(used[i]){
                        continue;
                    }
                    else{
                        temp.push_back(num[i]);
                        used[i] = true;
                        
                        solve(num, temp, used);

                        temp.pop_back();
                        used[i] = false;
                    }
                }

            }

        }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<bool> used(nums.size(), false);

        solve(nums, temp, used);

        return ans;
    }
};