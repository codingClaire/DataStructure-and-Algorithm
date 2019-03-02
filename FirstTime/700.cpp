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
