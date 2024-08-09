#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//  Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int height(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = height(root->left);
        int right = height(root->right);

        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode *root)
    {
        if (!root)
            return 1;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        if (abs(height(root->left) - height(root->right)) <= 1 and left and right)
            return true;

        return false;
    }
};
class Solution
{
public:
    // Function to check whether a binary tree is balanced or not.
    pair<bool, int> isBalancedFast(TreeNode *root)
    {
        // base case
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<int, int> left = isBalancedFast(root->left);
        pair<int, int> right = isBalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        if (leftAns && rightAns && diff)
        {
            ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    bool isBalanced(TreeNode *root)
    {
        return isBalancedFast(root).first;
    }
};
int main()
{
    return 0;
}