class Solution 
{
public:
      int charvalue(char a)
    {
      int n;
      switch(a)
      {
        case '(':n=1;break;
        case ')':n=-1;break;
        case '[':n=2;break;
        case ']':n=-2;break;
        case '{':n=3;break;
        case '}':n=-3;break;
      }
       return n;
    }
    bool isValid(string s) 
    {
       stack<int> sta;
       sta.push(4);
       int len=s.length();
       for(int i=0;i<len;i++)
       {
           int num=charvalue(s[i]);
           if(sta.top()>0&&sta.top()==-num)
               sta.pop();
           else sta.push(num);
       }
       if(sta.size()==1) return true;
         else return false;
    }
};




#include<iostream>
#include<cstring>
#include<stack>
using namespace std; 

class Solution 
{
public:
    int charvalue(char a)
    {
      int n;
      switch(a)
      {
        case '(':n=1;break;
        case ')':n=-1;break;
        case '[':n=2;break;
        case ']':n=-2;break;
        case '{':n=3;break;
        case '}':n=-3;break;
      }
       return n;
    }

    bool isValid(string s) 
    {
       stack<int> sta;
       sta.push(4);
       int len=s.length();
       for(int i=0;i<len;i++)
       {
           int num=charvalue(s[i]);
           if(abs(sta.top())<abs(num))
               return false;
           if(sta.top()>0&&sta.top()==-num)
               sta.pop();
           else sta.push(num);
       }
       if(sta.size()==1) return true;
         else return false;
    }
};//¿¼ÂÇÔËËã·û¼¶±ð
 

int main()
{
	Solution A;
	cout<<A.isValid("[()]");
	return 0;
}
