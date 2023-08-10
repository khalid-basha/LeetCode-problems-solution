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
    bool isLeaf(TreeNode* node){
        if(node->left ==NULL && node->right ==NULL)
            return true;
        return false;
    }
    int sumOfLeaves(TreeNode*node,bool side){
        if(!node)
            return 0;
        if(isLeaf(node)&& side)
            return node->val;
        return sumOfLeaves(node->left, true)+ sumOfLeaves(node->right, false);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        return sumOfLeaves(root->left, true)+ sumOfLeaves(root->right, false);

    }
};
