#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long remainder;
        while (x != 0) {
            remainder = remainder * 10 + x % 10;
            x = x / 10;
        }
         if(remainder>INT_MAX || remainder<INT_MIN) return 0;
        return int(remainder);
    }
};  
int main ()
{
 return 0;
}