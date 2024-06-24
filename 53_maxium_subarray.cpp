#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // Kandane algo
        int maxSum = INT_MIN;
        int sum = 0;
     // the process of kandane algo 
     /*is that if it anywhere encounters that our sum is less than 0
     //since having a maxSum in negative wont give the use the maximum sum
     and after each iteration we check for the maxSum
     */

        for (int i = 0; i < nums.size(); i++)
        {
            if (sum < 0)
            {
                sum = 0;
            }
            sum += nums[i];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};
int main()
{
}