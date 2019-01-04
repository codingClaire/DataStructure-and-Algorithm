#include<iostream>
#include<cstdio>
#include<queue>
using namespace std; 

class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> old,tmp;
    MyStack() {}
    
    /** Push element x onto stack. */
    void push(int x) 
    {
        old.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() 
    {
        int num;
        int oldsize=old.size();//Ҫ�̶���oldsize 
        for(int i=0;i<oldsize-1;i++)
        {
            tmp.push(old.front());
            old.pop();
        }//�������һ��Ԫ�أ�ȫ��Ų��tmp����
        num=old.front();
        old.pop();//ɾ��old���һ�������Ԫ��
        int tmpsize=tmp.size();
        for(int i=0;i<tmpsize;i++)
        {
            old.push(tmp.front());
            tmp.pop();
        }
		return num;
    }
    
    /** Get the top element. */
    int top() 
    {
        int num;
        num=old.back();
        return num;
    }
    bool empty() 
    {
       return old.empty(); 
    }
};

int main()
{
  // Your MyStack object will be instantiated and called as such:
   MyStack obj ;//= new MyStack();
   obj.push(1);
   obj.push(2);
   obj.push(3);
   obj.push(4);
   cout<<obj.pop()<<endl;
   cout<<obj.pop()<<endl;
   cout<<obj.pop()<<endl;
   cout<<obj.pop()<<endl;
   return 0;
}

        /*for(int i=0;i<old.size()-1;i++)
        {
            tmp.push(old.back());
            old.pop();
        }//�������һ��Ԫ�أ�ȫ��Ų��tmp����
        num=old.back();
        tmp.push(num);
        old.pop();//ɾ��old���һ�������Ԫ��
        for(int i=0;i<tmp.size();i++)
        {
            old.push(tmp.back());
            tmp.pop();
        }*/

    
    /** Returns whether the stack is empty. */
