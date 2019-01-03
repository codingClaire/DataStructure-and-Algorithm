

class Solution_104 {
public:
	int maxDepth(TreeNode* root)
	{
		int length = 0;
		if (root != NULL)
		{
			length = max(maxDepth(root->left), maxDepth(root->right));
			length++;
		}
		return length;
	}
};

class Solution_617 {
public:
	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {

		if (t1 == NULL) return t2;
		if (t2 == NULL) return t1;
		TreeNode* newtree = new TreeNode(t1->val + t2->val);
		if (t1 != NULL&&t2 != NULL)
		{

			newtree->left = mergeTrees(t1->left, t2->left);
			newtree->right = mergeTrees(t1->right, t2->right);

		}
		return newtree;
	}
};


class Solution_590 {
public:
	vector<int> postorder(Node* root)
	{
		vector<int> post;
		if (root != NULL)
		{
			for (int i = 0; i<root->children.size(); i++)
			{
				//if (root->children[i]!=NULL) 
				vector<int> tmp = postorder(root->children[i]);
				//post.push_back(root->children[i]->val);
				//不能用pushback 递归调用返回的是一个vector
				post.insert(post.end(), tmp.begin(), tmp.end());
			}
			post.push_back(root->val);
		}
		return post;
	}
};

class Solution_589 {
public:
	vector<int> preorder(Node* root)
	{
		vector<int> pre;
		if (root != NULL)
		{
			pre.push_back(root->val);
			for (int i = 0; i<root->children.size(); i++)
			{
				vector<int> tmp = preorder(root->children[i]);
				pre.insert(pre.end(), tmp.begin(), tmp.end());
			}

		}
		return pre;
	}
};

class Solution_700 {
public:
	TreeNode* searchBST(TreeNode* root, int val)
	{
		// TreeNode* subtree;
		if (root == NULL) return NULL;
		else
		{
			if (root->val == val)
				return root;
			else if (root->val>val)
				return searchBST(root->left, val);
			else return searchBST(root->right, val);
		}
	}
};

class Solution_559 {
public:
	int maxDepth(Node* root)
	{
		if (root == NULL) return 0;
		else
		{
			int max = 0;
			for (int i = 0; i<root->children.size(); i++)
			{
				int tmp = maxDepth(root->children[i]);
				if (tmp>max) max = tmp;
			}
			return max + 1;//加上原本的结点
		}
	}
};

class Solution_872 {//叶子结点相同的树
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

class Solution_637 {//树的层次平均值
public:
	vector<double> averageOfLevels(TreeNode* root)
	{
		vector<double> aver;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty())
		{
			int nodesize = q.size();
			double tmp = 0.0;
			for (int i = 0; i<nodesize; i++)
			{
				tmp += q.front()->val;
				if (q.front()->left != NULL) q.push(q.front()->left);
				if (q.front()->right != NULL) q.push(q.front()->right);
				q.pop();
			}
			aver.push_back(tmp / nodesize);
		}
		return aver;
	}
};

class Solution {//判断两棵树是否相同
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