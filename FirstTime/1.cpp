//用unordered_map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        vector<int> result;
        for(int i =0;i<nums.size();i++)
        {
            int numToFind = target-nums[i];
            if(seen.count(numToFind))//如果存在
            {
                result.push_back(seen[numToFind]); //添加对应的下标
                result.push_back(i);//当前的i
                return result;
            }
            seen.insert({nums[i],i});
        }
        return result;
    }
};


// 暴力
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
       //int label;
        vector<int> res;

       for(int i=0;i<nums.size();i++)
       {
           for(int j=nums.size()-1;j>0;j--)
           {
               if(nums[i]+nums[j]==target&&i!=j)
               {
                   res.push_back(i);
                   res.push_back(j);
                   break;
               }
           }
          if(res.size()==2) break;
       }
        return res;

    }
};
