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

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> finalResult;

        deque<TreeNode*> levelq = {}; 
        if(root)
        {
            levelq.push_back(root);
        }   

        int level = 0;
        vector<int> subResult;
        while(!levelq.empty())
        {
            int qsize = levelq.size();
            for (int i = 0; i < qsize; ++i)
            {
                TreeNode* curr = levelq.front();
                subResult.push_back(curr->val);

                if(curr->left)
                {
                    levelq.push_back(curr->left);
                }

                if(curr->right)
                {
                    levelq.push_back(curr->right);
                }

                levelq.pop_front();
            }

            ++level;

            finalResult.push_back(subResult);
            subResult.clear();
        }

        return finalResult;
    }
};
