#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int findPermutationDifference(string s, string t)
    {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            m1[s[i]] = i;
        }

        for (int i = 0; i < t.size(); i++)
        {
            m2[t[i]] = i;
        }

        for (auto &ele : m1)
        {
            sum += abs(ele.second - m2[ele.first]);
        }
        return sum;
    }
};
// better approach
class Solution
{
public:
    int findPermutationDifference(string s, string t)
    {
        unordered_map<char, int> m1;

        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            m1[s[i]] = i;
        }

        for (int i = 0; i < t.size(); i++)
        {
            sum += abs(i - m1[t[i]]);
        }
        return sum;
    }
};
int main()
{
    return 0;
}