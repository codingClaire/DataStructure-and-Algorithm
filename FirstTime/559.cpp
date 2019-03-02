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
			return max + 1;//����ԭ���Ľ���
		}
	}
};
