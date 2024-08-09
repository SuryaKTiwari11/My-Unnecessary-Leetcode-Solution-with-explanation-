#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // start represents the starting of the window
        // end represents the ending of the window
        // but in the start lets keep both at the starting of the array
        //(char array)
        if (s.size() == 0)
            return 0;
        int start = 0;
        int end = 0;
        int string_size = s.size();
        int count = 0;
        int max_count = 0;
        // we need to create a unordered_map to check
        // if we have seen the value or not

        unordered_map<char, int> m;

        while (end < string_size)
        {

            if (m.find(s[end]) == m.end() or m[s[end]] == 0)
            // it means that if the value ISNT in the map or in the current window
            {
                m[s[end]]++;
                // we add it to the map
                count = abs(end - start + 1);
                // increase the count
                max_count = max(max_count, count);
                // find the max count
                end++;
                // increase the pointer by 1
            }
            else
            {
                // if its in the current window
                //  we decrease the count by 1
                // we move the starting of the window to the right
                m[s[start]]--;
                start++;
            }
        }
        return max_count;
    }
};
int main()
{
    return 0;
}