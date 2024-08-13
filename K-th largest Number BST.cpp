#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void inorder(TreeNode<int>* root, vector<int> &v){
  if (root == NULL) {
    return;
  }
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
  
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    vector<int> vc;
    inorder(root,vc);
    int n = vc.size();
    if (k>0 && k<=n)
        return vc[n-k]; 
    else
        return -1; 
}

