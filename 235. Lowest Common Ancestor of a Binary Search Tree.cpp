/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   void getAncestor(TreeNode* root, TreeNode* node,vector<TreeNode*> &v){
       if(root->val == node->val){
           v.push_back(root);
       }
       if(root->val != node->val){
           if(node->val < root->val)
               getAncestor(root->left,node,v);
       else
               getAncestor(root->right,node,v);
           v.push_back(root);
       }
   }
   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>a1,a2;
        getAncestor(root,p,a1);
        getAncestor(root,q,a2);
        reverse(a1.begin(), a1.end());
        reverse(a2.begin(), a2.end());
        TreeNode* lca = NULL;
        for (auto i = 0; i < min(a1.size(), a2.size()); ++i) {
            if (a1[i] == a2[i])
                lca = a1[i];
            else
                break;
        }
        return lca;
   }
};
