class Solution 
{
public:
    int calPoints(vector<string>& ops) 
    {
        vector<int> st;
        int sum=0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="C")
            {
                int tmp=st.back();
                st.pop_back();
                sum=sum-tmp;
            }
            else if(ops[i]=="D")
            {
                int tmp=st.back();
                st.push_back(2*tmp);
                sum=sum+2*tmp;
            }
            else if(ops[i]=="+")
            {
                int tmp1=st[st.size()-1],tmp2=st[st.size()-2];
                st.push_back(tmp1+tmp2);
                sum=sum+tmp1+tmp2;
            }
            else 
            {
                int score=stoi(ops[i]);
                st.push_back(score);
                sum=sum+score;
            }    
        }
    return sum;
    }
};
