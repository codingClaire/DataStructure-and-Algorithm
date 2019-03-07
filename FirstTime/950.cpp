class Solution
{
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck)
    {
        vector<int> res;
        int len=deck.size();
        sort(deck.begin(),deck.end());//从小到大排序
        res.insert(res.begin(),deck.back());
        deck.pop_back();
        //while(!deck.empty())
        for(int i=0;i<len-1;i++)
        {
            int newfront=res.back();
            res.insert(res.begin(),newfront);
            res.pop_back();
            //将最后一个元素移动到最前面
            int addfront=deck.back();
            res.insert(res.begin(),addfront);
            deck.pop_back();
            //加入原序列最大的元素 并删除原序列最大的元素
        }
        return res;
    }
};
