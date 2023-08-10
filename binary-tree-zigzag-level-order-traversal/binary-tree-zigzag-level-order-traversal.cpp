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
   vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        if(!root) return answer;
        queue<TreeNode*> q;
        q.push(root);
        int level= 0;
        while (!q.empty()){
            int levelSize=q.size();
            vector<int> row;
            while(levelSize--){
                TreeNode* tp=q.front();
                q.pop();
                if (tp){
                    row.push_back(tp->val);
                    q.push(tp->left);
                    q.push(tp->right);
                }
            }
            if(level%2)
                    reverse(row.begin(),row.end());
            if(row.size())
                answer.push_back(row);
            level++;
        }
        return answer;
    }
};