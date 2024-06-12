#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int index = 0;
        // i made a variable that will help we keep track of the swap
        // it can also be used as a 2nd pointer in the function

        for (int i = 0; i < nums.size(); i++)
        {

            if (nums[i] != val) // if the value isn't
                                // same the we will put it in at the place of index
                                // and increase index
            {
                nums[index] = nums[i];
                index++;
            }
        }
    }
};

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int low = 0;
        int high = nums.size()-1;

            //this was my intuitive code 
            // i thought find 2 and putting them in the back 
            // n popping the array 
            //however this failed in the edge case
        
        while( low<=high){
            if(nums[high]==val){
                nums.pop_back();
                high--;
            }
            if(nums[low]==val){
                swap(nums[low],nums[high]);
                nums.pop_back();
                high--;
               
            }
            low++;

        }
        return nums.size();
    }
};
int main()
{
    return 0;
}