class Solution 
{
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) 
    {
        vector<int> g;
        for(int i=0;i<findNums.size();i++)
        {
            int greatnum=-1;
            int k;
            for(k=0;k<nums.size()-1;k++)
            {
                if(nums[k]==findNums[i])
                    break;
            }
            for(int j=k;j<nums.size();j++)
            {
                if(nums[j]>findNums[i])
                {
                   greatnum=nums[j];
                    break;
                }  
            }
            g.push_back(greatnum);
        }
        return g;
    }
};
