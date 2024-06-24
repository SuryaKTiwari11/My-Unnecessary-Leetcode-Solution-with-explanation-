#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int max1 = INT_MIN;

        for (int i = n - 2; i >= 0; i--) {
            max1 = max(max1, arr[i + 1]);
            ans[i] = max1;
        }
        ans[n - 1] = -1;
        return ans;
    }
};
// refer to this b4 
// https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array
int main ()
{
 return 0;
}