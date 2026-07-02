#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector <string> below20 ={
                "",
                "One",
                "Two",
                "Three",
                "Four",
                "Five",
                "Six",
                "Seven",
                "Eight",
                "Nine",
                "Ten",
                "Eleven",
                "Twelve",
                "Thirteen",
                "Fourteen",
                "Fifteen",
                "Sixteen",
                "Seventeen",
                "Eighteen",
                "Nineteen"
                };

    vector <string> tens ={
            "",
            "",
            "Twenty",
            "Thirty",
            "Forty",
            "Fifty",
            "Sixty",
            "Seventy",
            "Eighty",
            "Ninety"
            };

    string helper(int num) {
            if(num == 0){
                return "";
            }
            if(num < 20){
                return below20[num] + " ";
            }
            if(num < 100){
                return tens[num/10] + " " + helper(num % 10);}

            return below20[num/100] + " Hundred " +  helper(num % 100);
            };

    string numberToWords(int num) {
        
        if(num == 0){
            return "Zero";
        }
        string ans = "";

        int billion = num / 1000000000;
        int million = (num % 1000000000) / 1000000;
        int thousand = (num % 1000000) / 1000;
        int rest = (num % 1000);

        if(billion){
            ans = ans + helper(billion) + "Billion ";
        }
        if(million){
            ans = ans + helper( million) + "Million "; 
        }
        if(thousand){
            ans = ans + helper( thousand)+ "Thousand ";
        }
        if(rest){
            ans = ans + helper(rest);
        }
        
        ans.pop_back();
        
        return ans;
    }
};