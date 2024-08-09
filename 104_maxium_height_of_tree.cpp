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
    int maxDepth(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
            return 0;
        queue<TreeNode *> q;
        q.push(root);
        TreeNode *curr;
        while (!q.empty())
        {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++)
            {
                curr = q.front();
                q.pop();
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
                level.push_back(curr->val);
            }
            ans.push_back(level);
        }
        return ans.size();
    }
};
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        // every time u visit a node, there is an increase
        // on 1 in the integer val, this is how
        // recursion add one to the integer

        return 1 + max(left, right);
    }
};
int main()
{
    return 0;
}