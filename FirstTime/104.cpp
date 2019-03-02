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
