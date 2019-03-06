class Solution
{
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums)
    {
        if(nums.empty()) return NULL;
        int maxval=0,maxnum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxval)
            {
                maxval=nums[i];
                maxnum=i;
            }
        }
        TreeNode* root=new TreeNode(maxval);
        vector<int> leftpart,rightpart;
       // vector<int> leftpart=vector<int>(nums.begin(),nums.begin()+maxnum);
       // vector<int> rightpart=vector<int>(nums.begin()+maxnum+1,nums.end());
        leftpart.assign(nums.begin(),nums.begin()+maxnum);//截取左半边
        rightpart.assign(nums.begin()+maxnum+1,nums.end());//截取右半边
        root->left=constructMaximumBinaryTree(leftpart);
        root->right=constructMaximumBinaryTree(rightpart);
        return root;
    }
};
