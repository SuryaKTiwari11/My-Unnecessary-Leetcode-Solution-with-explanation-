#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        unordered_map<string, int> m;
        for (int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (m[arr[i]] == 1)
                k--;
            if (k == 0)
            {
                return arr[i];
            }
        }
        return "";
    }
};
int main()
{
    return 0;
}