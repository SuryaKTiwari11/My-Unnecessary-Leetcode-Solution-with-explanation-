#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        // we can convert this
        // think in such a way
        //  we have find the longest subbarray  of with the with
        // which contains k 0's
        int zeros = 0;
        // this is to count the numbers of 0;
        int max_length = 0;
        int length = 0;
        int left = 0;
        int right = 0;
        if (right < nums.size())
        {
            if (nums[right] == 0)
                zeros++;

            while (zeros > k)
            {
                if (nums[left] == 0)
                {
                    zeros--;
                }
                left++;
            }
            if (zeros <= k)
            {
                max_length = max(max_length, right - left + 1);
                right++;
            }
        }
        return max_length;
    }
};
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        // we can convert this
        // think in such a way
        //  we have find the longest subbarray  of with the with
        // which contains k 0's
        int zeros = 0;
        // this is to count the numbers of 0;
        int max_length = 0;
        int length = 0;
        int left = 0;
        int right = 0;
        while (right < nums.size())
        {
            if (nums[right] == 0)
                zeros++;

            if (zeros > k)
            {
                if (nums[left] == 0)
                {
                    zeros--;
                }
                left++;
            }
            if (zeros <= k)
            {
                max_length = max(max_length, right - left + 1);
            }
            right++;
        }
        return max_length;
    }
};
int main()
{
    return 0;
}