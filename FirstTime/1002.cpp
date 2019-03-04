class Solution
{
public:
    vector<string> commonChars(vector<string>& A)
    {
       int wordnum=A.size();
       int exactnum[26];
        for(int j=0;j<26;j++)
            exactnum[j]=100; //初始化 某个字符出现的最大值
       for(int i=0;i<wordnum;i++)
       {
          int tmp[26];
           for(int j=0;j<26;j++)
               tmp[j]=0;
           for(int k=0;k<A[i].size();k++)
               tmp[A[i][k]-'a']++;//对应的字符数加一

           for(int t=0;t<26;t++)
           {
               if(tmp[t]<exactnum[t])
                   exactnum[t]=tmp[t];
           }
       }
       vector<string> res;
       string s="";
       for(int i=0;i<26;i++)
       {
            for(int j=0;j<exactnum[i];j++)
            {
               char a=i+'a';
               string ch=a+s;
               res.push_back(ch);
            }

       }
        return res;
    }
};
