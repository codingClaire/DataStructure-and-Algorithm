#include<iostream>
#include<cstring>
using namespace std; 

class Solution {
public:
	string reverseWords(string s)
	{
		string news;
		int tmp = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ')
			{
				
				for (int j = tmp, k = i - 1; j < i; j++, k--)
				{
					news+= s[k];
					
				}
				tmp = i + 1;
				news+= ' ';
			}
		}
		for(int j=tmp,k=s.length()-1;j<s.length();j++,k--)
			news+=s[k];
		//for(int j=0;j<s.length();j++)
		//	printf("%c",news[j]);
		return news;
	}
};




int main()
{
	Solution A;
 	string a;
    getline(cin,a);
    cout << A.reverseWords(a) << endl;
	return 0;
}
