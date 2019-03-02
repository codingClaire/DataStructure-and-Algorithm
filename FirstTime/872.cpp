class Solution_872 {//Ҷ�ӽ�����ͬ����
public:
    void leafvalue(TreeNode* root,vector<int> &leafarray)
    {
        if(root!=NULL)
        {
            if(root->left==NULL&&root->right==NULL)
            leafarray.push_back(root->val);
            leafvalue(root->left,leafarray);
            leafvalue(root->right,leafarray);

        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        vector<int> l1,l2;
        leafvalue(root1,l1);
        leafvalue(root2,l2);
        if(l1.size()!=l2.size()) return false;
        for(int i=0;i<l1.size();i++)
        {
            if(l1[i]!=l2[i]) return false;
        }
        return true;
    }
};
