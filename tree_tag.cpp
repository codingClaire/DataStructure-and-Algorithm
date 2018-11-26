

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