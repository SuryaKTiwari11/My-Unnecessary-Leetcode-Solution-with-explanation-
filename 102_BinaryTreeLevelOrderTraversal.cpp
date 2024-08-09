/*Certainly! Let's break it down with an example:

### Using a Queue for Level-Order Traversal

1. **Initialize the Queue**:
    - Start by placing the root node of the tree in the queue.

2. **Process Each Level**:
    - While the queue is not empty, do the following:
        - Get the number of nodes at the current level (`s = q.size()`).
        - For each node at this level:
            - Take the node from the front of the queue (`TreeNode* node = q.front()`).
            - Remove it from the queue (`q.pop()`).
            - Add its children to the queue (if they exist).

### Step-by-Step Example

1. **Initial State**:
    - Tree:
      ```
      1
     / \
    2   3
      ```
    - Queue: `[1]`

2. **First Level**:
    - Process node `1`:
        - Queue after removing `1`: `[]`
        - Add children `2` and `3` to the queue: `[2, 3]`
    - Result after this level: `[[1]]`

3. **Second Level**:
    - Process node `2`:
        - Queue after removing `2`: `[3]`
        - `2` has no children, so the queue remains `[3]`
    - Process node `3`:
        - Queue after removing `3`: `[]`
        - `3` has no children, so the queue remains `[]`
    - Result after this level: `[[1], [2, 3]]`

### Summary

Using a queue, we ensure nodes are processed level by level. Each node's children are added to the queue, ensuring nodes on lower levels are visited before those on higher levels. This approach guarantees we visit all nodes in a level before moving to the next.*/
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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {

        vector<vector<int>> result;
        if (root == nullptr)
            return result;

        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++)
            {
                TreeNode *frontNode = q.front();
                q.pop(); // already stored, can be done later;
                if (frontNode->left)
                    q.push(frontNode->left);
                if (frontNode->right)
                    q.push(frontNode->right);
                level.push_back(frontNode->val);
            }
            result.push_back(level);
        }
        return result;
    }
};
//to revise 
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result; // this is to return our ans in
        if (root == nullptr)        // if our root is empty just return ans;
            return result;
        queue<TreeNode *> q; // now we will create a que to store Nodes;
        q.push(root);        // to start we will just push our root
        while (!q.empty())
        { // now until our q is empty , we'll run a while lp
            int size = q.size();
            vector<int>
                level; // in the vector well push the elements on the same level
            for (int i = 0; i < size; i++)
            { // the size gets fixed based on the prev entry n its
              // gets updated in the while loop
                // we save the front node , add the left n right node if the
                // exist
                //  pop n the value of that front node , when everything becomes
                //  null , que doesn't grow bigger n its stop at the leaf nodes
                TreeNode *frontNode = q.front();
                q.pop();
                if (frontNode->left)
                    q.push(frontNode->left);
                if (frontNode->right)
                    q.push(frontNode->right);
                level.push_back(frontNode->val);
            }
            result.push_back(level);
        }
        return result;
    }
};
int main()
{
    return 0;
}