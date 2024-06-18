#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcounter = INT_MIN;
        int counter = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                counter++;
            }
            else{
                counter = 0;
            }
            maxcounter = max(counter,maxcounter);
        }
        return maxcounter;
    }
};
int main ()
{
 return 0;
}