#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        int size_S = s.length();
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for (int i = 0; i < size_S; i++)
        {
            m1[s[i]]++;
        }
        for (int i = 0; i < size_S; i++)
        {
            m2[t[i]]++;
        }
        for (int i = 0; i < m1.size(); i++)
        {
            if (m1[i] != m2[i])
            {
                return false;
            }
        }
        return true;
    }
};

//time complexity and space complexity O(N);
int main()
{
    return 0;
}