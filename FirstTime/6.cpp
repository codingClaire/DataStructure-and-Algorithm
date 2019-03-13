#include<iostream> 
#include<cstring>
using namespace std;


class Solution 
{
public:
    string convert(string s, int numRows) 
    {
        string res;
        for(int i=0;i<numRows;i++)
        {
            if(i==0||i==numRows-1)
            {
            	if(numRows==1) res=s;
            	else
            	{
            		for(int j=i;j<s.length();j+=(2*numRows-2))  
                    	res+=s[j];
				}
            }
            else//i>0 && i<numRows-1
            {
            	int j=i;
                while(j<s.length())
                {
                    res+=s[j];
                    j+=2*(numRows-i-1);
                    if(j<s.length())
                    {
                       res+=s[j]; 
                    } 
                    j+=2*i;
                }
            }
        }
        return res;
    }
};



int main()
{
	Solution A;
	int n=1;
	string s="ABCDEF";
	cout<<A.convert(s,n);
}
