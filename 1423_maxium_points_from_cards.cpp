#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int right_sum = 0;
        int left_sum = 0;
        int max_sum = 0;

        for (int i = 0; i < k; i++)
        {
            left_sum += cardPoints[i];
        }
        max_sum = left_sum;
        int right_index = cardPoints.size() - 1;
        for (int i = k - 1; i >= 0; i--)
        {
            left_sum -= cardPoints[i];
            right_sum += cardPoints[right_index--];
            max_sum = max(max_sum, right_sum + left_sum);
        }
        return max_sum;
    }
};
int main()
{
    return 0;
}