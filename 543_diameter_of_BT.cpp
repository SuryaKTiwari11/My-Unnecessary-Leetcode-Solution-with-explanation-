#include <bits/stdc++.h>
#include <iostream>

//  * Definition for a binary tree node.
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
    int max1 = INT_MIN;
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        // every time u visit a node, there is an increase
        // on 1 in the integer val, this is how
        // recursion works adds one to the integer

        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (!root)
            return 0;

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        // so after checking from root till the end
        //  we will check for root ka left n root ka right
        //  assuming that they r the new root
        //  so basically on the remain subtree + its branches
        max1 = max(max1, left + right);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return max1;
    }
};
using namespace std;
int main()
{
    return 0;
}