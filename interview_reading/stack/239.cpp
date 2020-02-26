class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> s;
        for(int i=0;i<nums.size();i++){
            while(!s.empty()&&nums[s.back()]<=nums[i]){
                s.pop_back();
            }
            s.push_back(i);
            if(s.front()==i-k){
                s.pop_front();
            }
            if(i+1>=k){
                res.push_back(nums[s.front()]);
            }
        }
        return res;
    }
};