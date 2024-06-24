#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int counter;
        // for (int i = 0; i < nums.size(); i++) {
        //     counter = 0;
        //     for (int j = 0; j < nums.size(); j++) {
        //         if (nums[i] == nums[j]) {
        //             counter++;
        //         }
        //     }
        //     if (counter > nums.size() / 2)
        //         return nums[i];
        // }
        // return -1;

        // unordered_map<int,int> mp;
        // for(int i = 0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it:mp){
        //     if(it.second>nums.size() /2)
        //     return it.first;
        // }
        //  return -1;

        // Moore's Voting Algorithm
        int n = nums.size();
        int counter = 0;
        int element;
        for (int i = 0; i < n; i++) {
            if (counter == 0) {
                counter = 1;
                element = nums[i];
            } else if (nums[i] == element) {
                counter++;
            } else {
                counter--;
            }
        }
        // return element;

        // now just to confirm
        int counter1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == element) {
                counter1++;
            }
        }
        if (counter1 > nums.size() / 2)
            return element;
        return -1;
    }
};
// so what this algo does is that it check if the counter is 0
// this means that number that we have allocated to the var "element"
// there are equal number of values that oppose the majority element
// for example if there are 2 twos , there are also 2 (1 , 3)
//  hence there is no majority
// so in that case it sets the counter = 1;
//(bcuz we are counting for the value which we are stand ing on)
//  n our new elements becomes the val which we are on
//  if the element occurs again i increase the counter , if it doesn't i
//  decrease the val

int main ()
{
 return 0;
}