#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // in this algo we have 3 pointers
        int low = 0; // this shall be at the starting
        int mid = 0; // this shall be used for iterating through the array
        int high = nums.size() - 1; // this shall be put at the end of the array

        /*now the low of the dutch flag algo is
        when we encounter 0 we make it go to the starting  of the array
        so we swap the mid value with low value n low++ n (mid++)

        if we encounter 2 we make it go the ending of the array
       -so we swap the mid value with high value n high-- *(NOT  (mid++) NOT )*

       if we encounter 1 we simply just walk forward (mid++);
        */

        while (mid <= high) {
            switch (nums[mid]) {
            case 0:
                swap(nums[mid], nums[low]);
                low++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(nums[mid], nums[high]);
                high--;
                break;
            }
        }
    }
};
int main ()
{
 return 0;
}