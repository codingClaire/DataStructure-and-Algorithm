#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

void DFS(TreeNode* t,vector<TreeNode*>& e_child){
    if(t==NULL) return;
    if(t->val%2==0){
        if(t->left!=NULL)
            e_child.push_back(t->left);
        if(t->right!=NULL)
            e_child.push_back(t->right);
    }
    DFS(t->left, e_child);
    DFS(t->right,e_child);
}

class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        vector<TreeNode*> e_child;
        int e_sum=0;
        DFS(root, e_child);
        for (int i = 0; i < e_child.size();i++){
            if(e_child[i]->left!=NULL)
                e_sum += e_child[i]->left->val;
            if(e_child[i]->right!=NULL)
                e_sum += e_child[i]->right->val;
        }
        return e_sum;
    }
};