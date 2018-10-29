#include<vector>
#include<cstring>
#include<cstdio>
#include<iostream>
#include<string>

using namespace std;


class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
	{
		for(int i=0;i<emails.size();i++)
		{
			int len=emails[i].size();
			string::iterator it; 
			int flag=0;
			for (it = emails[i].begin(); it!=emails[i].end();it++)
			{
				if (*it == '.') emails[i].erase(it);
				if(*it=='+')	
				{
					while(*it!='@')
						emails[i].erase(it);
				}
				if(*it =='@') 
					break;
			}	
		}
		for(int i=0;i<emails.size();i++)
			cout<<emails[i]<<endl;
			
		int num=emails.size();
		vector<string> res;	
		res.push_back(emails[0]);
		int flag=0;	
		for(int i=1;i<emails.size();i++)
		{
			flag=0;
			for(int j=0;j<res.size();j++)
				if(emails[i]==res[j]) flag=1;
			if(flag==0) res.push_back(emails[i]);
		}
		for(int i=0;i<res.size();i++)
			cout<<res[i]<<endl;
	return res.size();
    }
};

int main()
{
	vector<string> e;
	//string[100]={,,,,,,,"fg.r.u.uzj+w.y+b@kziczvh.com","r.cyo.g+x+d.c+f.t@tgsg.z.com","r.cyo.g+x+t.y.l.i@tgsg.z.com","r.cyo.g+brxxi@tgsg.z.com","r.cyo.g+z+dr.k.u@tgsg.z.com","r.cyo.g+d+l.c.n+g@tgsg.z.com","fg.r.u.uzj+vq.o@kziczvh.com","fg.r.u.uzj+uzq@kziczvh.com","fg.r.u.uzj+mvz@kziczvh.com","fg.r.u.uzj+taj@kziczvh.com","fg.r.u.uzj+fek@kziczvh.com"};
	e.push_back("test.email+alex@leetcode.com");
	e.push_back("test.e.mail+bob.cathy@leetcode.com");
	e.push_back("testemail+david@lee.tcode.com");
/*	e.push_back("fg.r.u.uzj+o.pw@kziczvh.com");
	e.push_back("r.cyo.g+d.h+b.ja@tgsg.z.com");
	e.push_back("fg.r.u.uzj+o.f.d@kziczvh.com");
	e.push_back("r.cyo.g+ng.r.iq@tgsg.z.com");
	e.push_back("fg.r.u.uzj+lp.k@kziczvh.com");
	e.push_back("r.cyo.g+n.h.e+n.g@tgsg.z.com");
	e.push_back("fg.r.u.uzj+k+p.j@kziczvh.com");*/
	Solution s;
	cout<<s.numUniqueEmails(e);
return 0;
}
