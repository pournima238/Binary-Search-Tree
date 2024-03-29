#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        //both the nodes are present in left sub tree
        if(root->val > p->val && root->val>q->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        //both the nodes are present in right subtree
        if(root->val < p->val && root->val<q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        //else the both nodes are present in different sub trees
        return root;
    }
};