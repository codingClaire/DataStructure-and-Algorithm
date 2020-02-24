#include<iostream>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

void DFS(TreeNode* t, int n,int& d_sum,int& height){
    if(t==NULL) return;
    if(n==height)
        d_sum += t->val;
    else if(n>height){
        d_sum = t->val;
        height = n;
    }
    DFS(t->left, n + 1, d_sum, height);
    DFS(t->right, n + 1, d_sum, height);
}

class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int d_sum = 0;
        int height = 1;
        DFS(root, 1, d_sum, height);
        return d_sum;
    }
};