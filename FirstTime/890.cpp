#include<iostream>
#include<cstring>
#include<map>
#include<vector>
using namespace std;

class Solution 
{
public:
	int count_number(map<char,char> m,char a)
	{
		int sum=0;
		for(map<char,char>::iterator it=m.begin();it!=m.end();it++)
		{
			if(it->second==a)
				sum++;
		}
		return sum;
	}
	
	
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        map<char,char> match;
        vector<string> res;
        for(int j=0;j<26;j++)
            match['a'+j]='0';

        for(int k=0;k<words.size();k++)
        {
            int i=0;
            bool flag=true;
            while(flag==true)
            {
                if(match[pattern[i]]=='0'&&count_number(match,words[k][i])==0)
                    match[pattern[i]]=words[k][i];
                else
                {

                    if(match[pattern[i]]!=words[k][i])
                    {//不满足的条件：words[k][i]并不是pattern[i]对应的值 或者 word[k][i]对应的pattern不只一个
                        flag=false;
                        break;
                    }

                }
                i++;
                if(i==words[k].size())
                {
                    res.push_back(words[k]);
                    break;
                }
            }
            for(int j=0;j<26;j++)
            	match['a'+j]='0';
        }
        return  res;
    }
    
};


int main()
{
    Solution A;
    vector<string> words;
    words.push_back("abc");
    words.push_back("deq");
    words.push_back("mee");
    words.push_back("aqq");
    words.push_back("dkd");
    words.push_back("ccc");
    string pattern="abb";
    vector<string> res;
    res=A.findAndReplacePattern(words,pattern);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<endl;
    return 0;
}


/*---解法2---*/
//不用map
class Solution_2 
{
public:
    bool compare(string a, string b)
    {
        if(a.size() != b.size()) return false;
        for(int i =0 ; i < a.size(); i++)
        {
            for(int j = 0; j < a.size(); j++)
            {
                if(b[i] == b[j] && a[i] != a[j])
                    return false;
                else if(b[i] != b[j] && a[i] == a[j])
                    return false;
            }
        }
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> v;
        for(int i = 0; i < words.size(); i++)
        {
            if(compare(words[i], pattern) == true)
                v.push_back(words[i]);
        }
        return v;
    }
};