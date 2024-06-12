#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        for (auto ele : m)

            if (ele.second >= 2) {
                return true;
            }
            return false;
    }
};
int main ()
{
 return 0;
}