class Solution 
{
public:
    bool backspaceCompare(string S, string T) 
    {
       string s1,s2;
       for(int i=0;i<S.length();i++)
       {
           if(S[i]!='#')
               s1=s1+S[i];
           else
           {
               if(s1.length()!=0)
                   s1 = s1.substr(0,s1.length() - 1);
           }
               
       }
    for(int i=0;i<T.length();i++)
       {
           if(T[i]!='#')
               s2=s2+T[i];
           else
           {
               if(s2.length()!=0)
                   s2 = s2.substr(0,s2.length() - 1);
           }
       }
       return s1==s2;
    }
};
