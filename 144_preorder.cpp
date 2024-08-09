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
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr)
            return ans;
        stack<TreeNode*> st;
        st.push(root);
        while (!st.empty()) {
            TreeNode *curr = st.top();
            st.pop();
            ans.push_back(curr->val);

            if (curr->right)
                st.push(curr->right);
            if (curr->left)
                st.push(curr->left);
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

        ans.push_back(root->val);
        f(root->left, ans);
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