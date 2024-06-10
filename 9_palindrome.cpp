#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    return 0;
}
bool isPalindrome(int x)
{
    if (x < 0)
        return 0;
    int temp = x;

    long long int chest = 0;
    while (x != 0)
    {
        chest = (chest * 10) + x % 10;
        x = x / 10;
    }
    if (temp == chest)
        return 1;
    else
        return 0;
}