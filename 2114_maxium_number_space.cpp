#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int maximum = INT_MIN;
        for (int i = 0; i < sentences.size(); i++)
        {
            int counter = 1;
            for (int j = 0; j < sentences[i].size(); j++)
            {
                if (sentences[i][j] == ' ')
                {
                    counter++;
                }
                maximum = max(maximum, counter);
            }
        }
        return maximum;
    }
};
int main()
{
    return 0;
}