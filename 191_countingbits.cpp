#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        //the concept of the counting set bit is to take and 1 
        int counter= 0;
        while(n!=0){
            counter+=(n&1);
            n=n>>1; 
            //when we move right we dividing it by that means 1,10,100, n so on
        }
        return counter;
        
    }
};
int main ()
{
 return 0;
}