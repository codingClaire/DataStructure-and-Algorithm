#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
bool cmp(string a,string b)
	{	
		int i,j;
		for(i=0;i<a.length();i++)
			if(a[i]==' ') break;
		for(j=0;j<b.length();j++)
			if (b[j]==' ')  break;
		string c=a.substr(i,a.length());
		string d=b.substr(j,b.length()); 
		return c<d;
	}
class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) 
	{
        vector<string> word,num;
        for(int i=0;i<logs.size();i++)
        {
        	string last=logs[i].substr(logs[i].length()-1,logs[i].length());
        	//cout<<i<<last<<endl;
        	if(last>="0"&&last<="9")
        		num.push_back(logs[i]);
			else 
				word.push_back(logs[i]);	
		}
		
		sort(word.begin(),word.end(),cmp);
		//cmp(word[0],word[1]);
		for(int i=0;i<num.size();i++)
		{
			word.push_back(num[i]);
		}
		for(int i=0;i<word.size();i++)
		{
			cout<<word[i]<<endl;
		}
		
		return word;
    }
};


int main()
{
	Solution A;
	vector<string> logs;
	logs.push_back("a1 9 2 3 1");
	logs.push_back("g1 act car");
	logs.push_back("zo4 4 7");
	logs.push_back("ab1 off key dog");
	logs.push_back("a8 act zoo");
	A.reorderLogFiles(logs);
} 
