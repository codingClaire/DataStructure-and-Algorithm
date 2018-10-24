#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
	{
     	string s[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
		 ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
		int wordlen=words.size();
		string codes[105];
		//vector<string> *codes;
		for(int i=0;i<words.size();i++)
		{
			for(int j=0;j<words[i].size();j++)
			{
				int num=words[i][j]-'a';
				if(j==0) codes[i]=s[num];
				else codes[i].append(s[num].begin(),s[num].end());
		    }
		  // cout<<codes[i]<<endl;
		} //生成一个string的数组 存放着每一个单词对应的密码
		
		int number[105];
		int i,j;
		for(i=0;i<wordlen;i++)
		{
			number[i]=0;
			for(j=0;j<i;j++)
			if(codes[i]!=codes[j])
				number[i]++;
        }
		 return number[i--];
    }
};
int main()
{
	vector<string> words;
	words.push_back("gin");
	words.push_back("zen");
	words.push_back("gig");
	words.push_back("msg");
//	,"zen","gig","msg"};
	Solution A;
	cout<<A.uniqueMorseRepresentations(words);
}
