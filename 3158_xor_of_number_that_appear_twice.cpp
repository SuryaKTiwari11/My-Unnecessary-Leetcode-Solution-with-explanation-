#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int duplicateNumbersXOR(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int ans = 0;
        for (auto &ele : m)
        {
            if (ele.second == 2)
            {
                ans = ans ^ ele.first;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}