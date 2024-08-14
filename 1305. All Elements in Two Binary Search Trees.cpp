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
    vector<int>v;
    void pp(TreeNode*root3){
        if(!root3){
            return;
        }
        v.push_back(root3->val);
        pp(root3->right);
        pp(root3->left);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
       pp(root1);
       pp(root2);
       sort(v.begin(),v.end());
       return v; 
    }
};
