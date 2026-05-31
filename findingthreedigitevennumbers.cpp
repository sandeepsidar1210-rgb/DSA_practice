#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {

        set <int> st;
        for (int i = 0 ; i<digits.size() ; i++){
            
            for(int j= 0 ; j< digits.size(); j++){

                for(int k =0; k < digits.size(); k++){

                    if(i == k || j==k || j==i){
                        continue;
                    }

                    if(digits[i] == 0){
                        continue;
                    }

                    if(digits[k]%2 != 0){
                        continue;
                    }

                    int nums = digits[i]*100 + digits[j]*10 + digits[k];
                    st.insert(nums);

                }
            }

        }
        vector <int> ans(st.begin(), st.end());
        return ans;
    }
      
};