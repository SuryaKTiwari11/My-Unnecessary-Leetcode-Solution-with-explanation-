#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ones = 0;
        int twoes = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            // cramp this
            ones = (ones ^ nums[i]) & (~twoes);
            twoes = (twoes ^ nums[i]) & (~ones);
        }
        return ones;
    } // THIS ANS IS SUCH A SCAM, i would advise u to cramp it
};
class Solution
{
public: // this is more intuitive and ez to understand since it is
    // high unlikely that our complexity will reach
    // 32log32 + 32 > (nLog n + n) more most cases
    int singleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i += 3)
        {
            if (nums[i - 1] != nums[i])
            {
                return nums[i - 1];
            }
        }
        return nums[nums.size() - 1];
    }
};
int main()
{
    return 0;
}