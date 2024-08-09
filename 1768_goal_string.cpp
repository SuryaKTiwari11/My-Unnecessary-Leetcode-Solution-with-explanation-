#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string interpret(string command)
    {
        string s = "";
        int n = command.size();
        for (int i = 0; i < n; i++)
        {
            if (command[i] == 'G')
            {
                s.push_back('G');
            }
            else if (command[i] == '(' and command[i + 1] == ')' and i < n - 1)
            {
                s.push_back('o');
            }
            else if (command[i] == '(' and command[i + 1] == 'a' and i < n - 3)
            {
                s.push_back('a');
                s.push_back('l');
            }
        }
        command = s;

        return command;
    }
};
int main()
{
    return 0;
}