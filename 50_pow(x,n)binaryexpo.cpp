#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    double myPow1(double x, int n)
    {
        if (n == 0)
            return 1;
        if (x == 0)
            return 0;

        double ans = myPow(x, n / 2);

        if (n % 2 == 0)
            return ans * ans;
        else
        {
            return ans * ans * x;
        }
    }
    double myPow(double x, int n)
    {
        if (n < 0)
            return (1 / (myPow1(x, abs(n))));
        return myPow1(x, n);
    }
};
class Solution
{
public:
    double myPow(double x, int n)
    {
        double res = 1.0;
        while (n != 0)
        {
            if (n % 2 == 0)
            {
                x *= x;
                n /= 2;
            }
            else if (n > 0)
            {
                res *= x;
                --n;
            }
            else
            {
                res /= x;
                ++n;
            }
        };
        return res;
    }
};
int main()
{
    return 0;
}