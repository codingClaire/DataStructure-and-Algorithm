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
