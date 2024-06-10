#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        while (low <= high) {
            if (!((s[low] >= 'A' and s[low] <= 'Z') or
                  (s[low] >= '0' and s[low] <= '9')))
                low++;
            else if (!((s[high] >= 'A' and s[high] <= 'Z') or
                       (s[high] >= '0' and s[high] <= '9')))
                high--;
            else if (s[low] != s[high]) {
                return false;
            } else {

                low++;
                high--;
            }
        }
        return true;
    }
};
int main ()
{
 return 0;
}