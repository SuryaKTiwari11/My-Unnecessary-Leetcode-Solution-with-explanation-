#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string defangIPaddr(string address)
    {
        int n = address.size();
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (address[i] != '.')
            {
                ans += address[i];
            }
            else
            {
                ans += "[.]";
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}