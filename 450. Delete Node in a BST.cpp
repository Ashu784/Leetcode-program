/************************************************************SOLUTION 1********************************************************************/
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
    bool preorder(TreeNode* root,int key, vector<int>& vc) {
        static bool flag = false;
        if(root != NULL){
            if((root->val) == key)
                flag = true;
            else
                vc.push_back(root->val);
            preorder(root->left, key, vc);
            preorder(root->right, key, vc);
        }
        return flag;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val){
        if(root == NULL)
            return new TreeNode(val);
        else if(val<root->val)
            root->left = insertIntoBST(root->left, val);
        else if(val>root->val)
            root->right = insertIntoBST(root->right, val);
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        vector<int>vc;
        preorder(root, key, vc);
        root = NULL;
        for(int i=0; i<vc.size(); i++){
            root = insertIntoBST(root, vc[i]);
        }
    return root;
    }
};


/************************************************************SOLUTION 2********************************************************************/
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return root;
        if(key < root->val)
            root->left = deleteNode(root->left, key);
        else if(key > root->val)
            root->right = deleteNode(root->right, key);
        else {
            if(root->left == NULL && root->right == NULL)
                return NULL;
            else if(root->left != NULL && root->right == NULL)
                return root->left;
            else if(root->left == NULL && root->right != NULL)
                return root->right;
            else{
                root->val = getMax(root->left);
                root->left = deleteNode(root->left, root->val);
            }      
        }
        return root;  
    }
    int getMax(TreeNode* node){
        int max = node->val;
        while(node->right != NULL){
            max = node->right->val;
            node = node->right;
        }
        return max;
    }
};
