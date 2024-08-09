#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
    int longest_substring_at_most_k_dis(string s, int k)
    {
        int left = 0;
        int right = 0;
        int max_len = 0;
        unordered_map<char, int> m;
        int n = s.size();
        while (right < n)
        {
            m[s[right]]++;
            if (m.size() > k)
            {
                m[s[left]]--;
                if (m[s[left]] == 0)
                {
                    m.erase(s[left]);
                }
                left++;
            }
            if (m.size() <= k)
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
/*Description
Given a string s and an integer k, return the
length of the longest substring of s that contains
at most k distinct characters.



Example 1:

Input: s = "eceba", k = 2
Output: 3
Explanation: The substring is "ece" with length 3.
Example 2:

Input: s = "aa", k = 1
Output: 2
Explanation: The substring is "aa" with length 2.


Constraints:

1 <= s.length <= 5 * 104
0 <= k <= 50 */