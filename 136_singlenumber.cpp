#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i = 1;i<nums.size();i++){
            ans = ans ^ nums[i];
        }
        return ans;
        //xor the result with the previous element
        // communicative rule will handle the rest;
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans;
        for(int i  = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto ele : m){
            if(ele.second!=2)
            ans = ele.first;

        }
        return ans;
    }
};
//binary is fast as hell then we have normal math 
// so use binary >math> any ds if required
int main ()
{
 return 0;
}