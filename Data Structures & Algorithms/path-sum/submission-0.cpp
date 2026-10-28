/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 #include <numeric>

class Solution {
public:

    bool calcSum(TreeNode* root, vector<int> path, int target)
    {
        // valid check 
        if(!root)
        {
            return false;
        }
        path.push_back(root->val);

        // leaf node check 
        if(!root->left && !root->right && accumulate(path.begin(), path.end(), 0) == target)
        {
            return true;
        }
        if(calcSum(root->left, path, target))
        {
            return true;
        }
        if(calcSum(root->right, path, target))
        {
            return true;
        }
        path.pop_back();

        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        vector<int> path;
        return calcSum(root, path, targetSum);
    }
};