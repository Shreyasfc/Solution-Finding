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
    bool checkTree(TreeNode* root) {
        
        TreeNode *ChildOne;
        TreeNode *ChildTwo;
        
        ChildOne = root->left;
        ChildTwo = root->right;
        
        int valRoot = root->val;
        int valOne = ChildOne->val;
        int valTwo = ChildTwo->val;
        
        if (valRoot == (valOne + valTwo))
        {
            return true;
        }
        
        return false;
    }
};