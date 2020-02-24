#include<iostream>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

int DFS(TreeNode* t,int &count){
    if(t==NULL) return 0;
    int child_sum = DFS(t->left,count) + DFS(t->right,count);
    if(t->val==child_sum+1){//够提供给自己和孩子
        return 0;
    }
    else if(t->val>child_sum+1){//还能提供给父母
        int toParent = t->val - (child_sum + 1);
        count += toParent;
        return -toParent;
    }
    else{//需要父母提供给他
        int fromParent= (child_sum + 1)-t->val;
        count += fromParent;
        return fromParent;
    }
}


class Solution {
public:
    int distributeCoins(TreeNode* root) {
        int count=0;
        DFS(root,count);
        return count;
    }
};