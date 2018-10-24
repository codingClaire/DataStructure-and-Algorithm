#include<cstring>
#include<iostream>
using namespace std;

class Solution 
{
public:
    int minFlipsMonoIncr(string S) 
	{
    	int f0=0,f1=0,b0=0,b1=0;
    	int insert;
    	int s1=0,s2=0,s3=0;
		for(int j=S.size();j>=0;j--)
		{
			if(S[j]=='1'&&S[j-1]=='0')
			{
				insert=j;
				for(int i=0;i<S.size();i++)
				{
					if(i<insert&&S[i]=='0') f0++;
					if(i>=insert&&S[i]=='0') b0++;	
				}
				f1=insert-f0;
				b1=S.size()-insert-b0;	
				s1=f0+b0;
				s2=S.size()-s1;
				if(s3==0) s3=f1+b0;
				if(s3>f1+b0) s3=f1+b0;
				if(s3>s1) s3=s1;
				if(s3>s2) s3=s2;
			 f0=0;f1=0;b0=0;b1=0;
			}	
		}	
		return s3;
    }
};

int main()
{
	Solution A;
	string s="0101100011";
	cout<<A.minFlipsMonoIncr(s);
	return 0;
}


/*TLE
class Solution 
{
public:
    int minFlipsMonoIncr(string S) 
	{
    	int f0=0,f1=0,b0=0,b1=0;
    	int insert;
    	int s1=0,s2=0,s3=0;
		for(int j=S.size();j>=0;j--)
		{
			if(S[j]=='1'&&S[j-1]=='0')
			{
				insert=j;
				for(int i=0;i<S.size();i++)
				{
					if(i<insert&&S[i]=='0') f0++;
					if(i<insert&&S[i]=='1') f1++;
					if(i>=insert&&S[i]=='0') b0++;
					if(i>=insert&&S[i]=='1') b1++;	
				}	
				s1=f0+b0;
				s2=f1+b1;
				if(s3==0) s3=f1+b0;
				if(s3>f1+b0) s3=f1+b0;
				if(s3>s1) s3=s1;
				if(s3>s2) s3=s2;
			//cout<<f0<<" "<<f1<<" "<<b0<<" "<<b1<<" "<<s1<<" "<<s2<<" "<<s3<<endl;
			 f0=0;f1=0;b0=0;b1=0;
			}	
		}	
		return s3;
    }
};
*/
