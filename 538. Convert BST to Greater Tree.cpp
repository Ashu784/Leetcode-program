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
    void sum(TreeNode* root, int& count){
        if(root != NULL){
            sum(root->right, count);
            count = (root->val += count);
            sum(root->left, count);
        }
    }
    TreeNode* convertBST(TreeNode* root) {
        int count = 0;
        sum(root, count);
        return root;        
    }
};
