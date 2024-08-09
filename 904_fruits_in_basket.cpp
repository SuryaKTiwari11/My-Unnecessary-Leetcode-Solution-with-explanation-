#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        //"Find the longest continuous sub array that has exactly 2
        // distinct
        // elements."
        int left = 0;
        int right = 0;
        int max_len = 0;
        int n = fruits.size();
        unordered_map<int, int> m;
        while (right < n)
        {
            m[fruits[right]]++;
            if (m.size() > 2)
            {
                m[fruits[left]]--;
                if (m[fruits[left]] == 0)
                {
                    m.erase(fruits[left]);
                }
                left++;
            }
            if (m.size() <= 2)
            {
                max_len = max(max_len, right - left + 1);
            }
            right++;
        }
        return max_len;
    }
};
class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        //"Find the longest continuous sub array that has exactly 2
        // distinct
        // elements."

        int left = 0;
        int right = 0;
        int max_len = 0;
        int n = fruits.size();
        unordered_map<int, int> m;
        while (right < n)
        {
            m[fruits[right]]++;
            if (m.size() > 2)
            {
                while (m.size() > 2)
                {
                    m[fruits[left]]--;
                    if (m[fruits[left]] == 0)
                    {
                        m.erase(fruits[left]);
                    }
                    left++;
                }
            }
            if (m.size() <= 2)
            {
                max_len = max(max_len, right - left + 1);
            }
            right++;
        }
        return max_len;
    }
};
int main()
{
    return 0;
}