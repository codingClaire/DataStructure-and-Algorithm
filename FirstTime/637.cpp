class Solution_637 {//���Ĳ���ƽ��ֵ
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
