#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string s = "";

        for (int j = 0; j < word1.size(); j++)
        {
            s += word1[j];
        }

        string t = "";

        for (int j = 0; j < word2.size(); j++)
        {
            t += word2[j];
        }

        if (s == t)
            return 1;
        return 0;
    }
};
int main()
{
    return 0;
}