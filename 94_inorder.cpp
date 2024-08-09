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
//to revise
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (!root)
            return ans;
        stack<TreeNode *> st;
        TreeNode *curr = root;
        while (curr or !st.empty())
        {
            if (curr)
            {
                st.push(curr);
                curr = curr->left;
            }
            else
            {
                curr = st.top();
                st.pop();
                ans.push_back(curr->val);
                curr = curr->right;
            }
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
        ans.push_back(root->val);
        f(root->right, ans);
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