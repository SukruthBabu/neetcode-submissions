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

TreeNode* getMinValue(TreeNode* root)
{
    TreeNode* curr = root;
    while (curr && curr->left)
    {
        curr = curr->left;
    }
    return curr;
}

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
        {
            return nullptr;
        }

        if(key > root->val)
        {
            root->right = deleteNode(root->right, key);
        }
        else if(key < root->val)
        {
            root->left = deleteNode(root->left, key);
        }
        else
        {
            // reached the node to delete 
            if (!root->left)
            {
                return root->right; // should be null, this is 1 child case
            }
            else if (!root->right)
            {
                return root->left; // should be null, this is 1 child case
            }
            else
            {
                // find the minimum value to replace the root, since right of root should always have greater values 
                TreeNode* minNode  = getMinValue(root->right); 
                root->val = minNode->val;
                root->right = deleteNode(root->right, minNode->val);
            }
        }

        return root;
    }
};