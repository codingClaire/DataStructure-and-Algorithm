#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std; 

class Solution 
{
public:
    string longestPalindrome(string s) 
    {
        int center[1000];
        string origin=s;
        for(int i=0;i<=s.length();i+=2)
        {
            s.insert(i,1,'#');
        }//转换奇回文和偶回文
        for(int i=0;i<s.length();i++)
        {
            center[i]=0;
            for(int j=i+1;2*i-j>=0&&j<s.length();j++)
            {
                if(s[j]==s[2*i-j])
                    center[i]++;
                else break;
            }
        }
        int maxradius=0, maxlabel=0;
        for(int i=0;i<s.length();i++)
        {
            if(center[i]>maxradius)
            {
                maxlabel=i;
                maxradius=center[i];
            }
        }
        string res;
        res=s.substr(maxlabel-center[maxlabel],2*center[maxlabel]+1);
        res.erase(remove(res.begin(), res.end(), '#'), res.end());
        return res;
    }
};


int main()
{
	Solution A;
	string s;
	while(cin>>s)
		cout<<A.longestPalindrome(s)<<endl;
	return 0;
}
