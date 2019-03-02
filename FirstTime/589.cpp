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
