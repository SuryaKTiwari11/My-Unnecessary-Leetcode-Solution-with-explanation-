#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ptr1 = m - 1;
        int ptr2 = n - 1;
        int ptr3 = m + n - 1;

        while (ptr1 >= 0 and ptr2 >= 0) {
            if (nums1[ptr1] > nums2[ptr2]) {
                nums1[ptr3] = nums1[ptr1];

                ptr1--;
            } else {
                nums1[ptr3] = nums2[ptr2];
                ptr2--;
            }
            ptr3--;
        }
        while (ptr2 >= 0) {
            nums1[ptr3] = nums2[ptr2];
            ptr3--;
            ptr2--;
        }
    }
};
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> ans;
        int ptr1 = 0;
        int ptr2 = 0;
        while (ptr1 < m and ptr2 < n)
        {
            if (nums1[ptr1] <= nums2[ptr2])
            {
                ans.push_back(nums1[ptr1]);
                ptr1++;
            }
            else
            {
                ans.push_back(nums2[ptr2]);
                ptr2++;
            }
        }
        while (ptr1 < m)
        {
            ans.push_back(nums1[ptr1]);
            ptr1++;
        }
        while (ptr2 < n)
        {
            ans.push_back(nums2[ptr2]);
            ptr2++;
        }
        int j = 0;
        while (j < ans.size())
        {
            nums1[j] = ans[j];
            j++;
        }
        // return nums1;
    }
};
int main()
{
    return 0;
}