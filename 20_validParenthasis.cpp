#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {

        /*
        step 1 : we will check weather: corresponding to our closed Bracket
        is there a open bracket present in our hashmap
        TestCase: "()"
        "(" since this is not a element present in the hashmap
        it will never enter the 1st if statement n simply will get pushed inside the st;
        the next iteration is ")" , we will check if there is a value in our hashmap
        corresponding to an open bracket , if yes we will enter the if statement
        we will check if the stack is empty or not since we are a closed bracket cuz that wont
        make sense , we will check the if the top value of the closed corresponds to the top value
        of the stack n that value is they key in our hashmap
         st.top() == mp[s[i]]
         if the case is true we will simply pop the value : meaning the both open n closed were present
         if that not the case that means '(]' n will we simply return false because it didn't correspond
         to the correct hash value
         if the stack is non empty it means that its not balanced

        */
        unordered_map<char, char> mp; // hashmap
        int size = s.size();          // size variable
        stack<char> st;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';
        for (int i = 0; i < size; i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                if (!st.empty() and st.top() == mp[s[i]])
                    st.pop();
                else
                    return false;
            }
            else
                st.push(s[i]);
        }

        if (st.empty())
            return 1;
        return 0;
    }
};
class Solution
{
public:
    bool isValid(string s)
    {
        unordered_map<char, char> mp; // hashmap
        int size = s.size();          // size variable
        stack<char> st;

        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';

        for (int i = 0; i < size; i++)
        {
            if (mp.find(s[i]) != mp.end()) // help me check weather the elem is
                                           // present in the hashmap
            // we used closing as ele and open as keys because later down the
            // line we have to check
            //  corresponding to our closed bracket , is there the ele->key wala
            //  element present at the
            // top of the stack
            {
                if (!st.empty() and st.top() == mp[s[i]])
                {
                    st.pop();
                }
                else
                    return false;
            }
            else
            {
                st.push(s[i]);
            }
        }

        if (st.empty())
            return 1;
        return 0;
    }
};
int main()
{
    return 0;
}