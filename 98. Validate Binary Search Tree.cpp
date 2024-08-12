/**********************************************SOLIUTION 1********************************************************************/


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
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> vc;
    vector<int> inorder(TreeNode* root) {
        if(root != NULL){
            inorder(root->left);
            vc.push_back(root->val);
            inorder(root->right);
        }
    return vc;
    }
    bool isValidBST(TreeNode* root) {
        vector<int>res;
        res = inorder(root);
        for(int i = 0; i < res.size()-1; i++)
        {
            if(res[i] >= res[i+1])
                return false;
        }       
        return true;
    }
};




/**********************************************SOLIUTION 2********************************************************************/


