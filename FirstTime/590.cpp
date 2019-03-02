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
				//������pushback �ݹ����÷��ص���һ��vector
				post.insert(post.end(), tmp.begin(), tmp.end());
			}
			post.push_back(root->val);
		}
		return post;
	}
};
