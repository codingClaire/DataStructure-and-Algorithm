#include<iostream>
#include<algorithm>
#define max(a,b) ((a)>(b)?(a):(b))
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

/*LCA问题：指在有根树中，找出某两个结点u和v最近的公共祖先*/

int TreeDepth(TreeNode* root){
    if(root==NULL)
        return 0;
    return 1 + max(TreeDepth(root->right), TreeDepth(root->left));
}

TreeNode* DFS(TreeNode* t, int h,int height){
    if(t==NULL)
        return NULL;
    if(h==height-1)
        return t;
    TreeNode *l = DFS(t->left, h + 1, height);
    TreeNode *r = DFS(t->right, h + 1, height);
    if(l!=NULL&&r!=NULL){
        return t;
    }
    if(l==NULL)
        return DFS(t->right, h + 1, height);
    return DFS(t->left, h + 1, height);
}

class Solution {
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int TreeHeight = TreeDepth(root);
        return DFS(root, 0, TreeHeight);
        }
};




class Solution_2 {
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(root==NULL)
            return NULL;
        int l = TreeDepth(root->left);
        int r = TreeDepth(root->right);
        if(l==r)
            return root;
        else if (l>r)
            return lcaDeepestLeaves(root->right);
        else
            return lcaDeepestLeaves(root->left);
    }
};


