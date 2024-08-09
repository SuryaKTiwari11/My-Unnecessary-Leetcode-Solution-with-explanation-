#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> m1;
        unordered_set<int> m2;
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++)
        {
            m1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            m2.insert(nums2[i]);
        }
        for (auto &ele : m1)
        {
            if (m2.find(ele) != m2.end())
            {
                ans.push_back(ele);
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}