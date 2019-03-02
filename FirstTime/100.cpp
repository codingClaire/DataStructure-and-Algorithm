class Solution {//�ж��������Ƿ���ͬ
public:
    void bfs(TreeNode* root,vector<int> &tree)
    {
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty())
        {
            int nodenum=qu.size();
            for(int i=0;i<nodenum;i++)
            {
                int tmp=NULL;
                if(qu.front()!=NULL)
                {
                    tmp=qu.front()->val;
                    if(qu.front()->left!=NULL) qu.push(qu.front()->left);
                    else qu.push(NULL);
                    if(qu.front()->right!=NULL) qu.push(qu.front()->right);
                    else qu.push(NULL);
                }
                tree.push_back(tmp);
                qu.pop();
            }
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        vector<int> tree1,tree2;
        bfs(p,tree1);
        bfs(q,tree2);
        if(tree1.size()!=tree2.size()) return false;
        for(int i=0;i<tree1.size();i++)
        {
            if(tree1[i]!=tree2[i])
                return false;
        }
        return true;
    }
};
