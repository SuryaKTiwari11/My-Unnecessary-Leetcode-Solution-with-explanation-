#include <bits/stdc++.h>
#include <iostream>
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }
        for(int i = 0;i<n/2;i++){
            nums[2*i]=pos[i];
            nums[(2*i)+1]=neg[i];
        }
        return nums;
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }
        for(int i = 0;i<n/2;i++){  //variety mei min of (poslength,neglength)
            nums[2*i]=pos[i];
            nums[(2*i)+1]=neg[i];
        }
        return nums;

        int n = nums.size();
        vector<int> ans(n);
        int oddpointer = 0;
        int evenpointer = 1;

        for(int i = 0;i<n;i++){
            if(nums[i]>=0){
                ans[oddpointer]=nums[i];
                oddpointer+=2;
            }
            else{
                  ans[evenpointer]=nums[i];
                evenpointer+=2;
            }

        }
        return ans;
   

    }
};

using namespace std;
int main ()
{
 return 0;
}