#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (!root)
            return ans;

        stack<TreeNode *> st1;
        stack<TreeNode *> st2;

        st1.push(root);
        while (!st1.empty())
        {
            TreeNode *curr = st1.top();
            st2.push(curr);
            st1.pop();
            if (curr->left)
                st1.push(curr->left);
            if (curr->right)
                st1.push(curr->right);
        }
        while (!st2.empty())
        {
            TreeNode *value = st2.top();
            ans.push_back(value->val);
            st2.pop();
        }
        return ans;
    }
};
class Solution
{
public:
    void f(TreeNode *root, vector<int> &ans)
    {
        if (root == nullptr)
            return;

        f(root->left, ans);
        f(root->right, ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        f(root, ans);
        return ans;
    }
};
int main()
{
    return 0;
}