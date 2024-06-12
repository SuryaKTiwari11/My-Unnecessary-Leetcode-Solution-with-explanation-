#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(long long n)
    {
        if ((n & (n - 1)) == 0 and n > 0)
            return true;
        return false;
    }
};
int main()
{
    return 0;
}