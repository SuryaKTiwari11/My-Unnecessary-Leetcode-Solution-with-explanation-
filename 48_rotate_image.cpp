#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
    void swap1(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

public:
    void rotate(vector<vector<int>> &matrix)
    {
        int q = matrix.size();
        for (int i = 0; i < q; i++)
        {
            for (int j = i + 1; j < q; j++)
            { // j = i+1 j will be always ahead of i n therefore no value
                // will be same

                swap1(&matrix[i][j], &matrix[j][i]);
            }
        }
        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < q / 2; j++) // since we have to only have the reverse half the array
                                            // i will help us go through all rows
                                            // j mei half hi swap karna hai to make the change to the whole row
            {
                swap1(&matrix[i][j], &matrix[i][q - j - 1]);
            }
        }
    }
};
int main()
{
    return 0;
}