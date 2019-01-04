#include<iostream>
#include<stack>
using namespace std; 

class MyQueue 
{
public:
    /** Initialize your data structure here. */
    MyQueue() {}
    
    /** Push element x to the back of queue. */
    void push(int x) 
    {
        old.push(x);
    }
    /** Removes the element from in front of queue and returns that element. */
    int pop() 
    {
        int num;
        while(!old.empty())
        {
          invert.push(old.top());
          old.pop();
        }//元素进入invert栈
        num=invert.top();
        invert.pop();//删掉先进的元素
        
        while(!invert.empty())
        {
            old.push(invert.top());
            invert.pop();
        }//更新old栈
        return num;
    }
    
    /** Get the front element. */
    int peek() 
    {
        /*while(!old.empty()) 
           invert.push(old.top());
        //元素进入invert栈
        int num=invert.top();
		while(!invert.empty())
	       invert.pop();
        return num;*/
		int num;
        while(!old.empty())
        {
          invert.push(old.top());
          old.pop();
        }//元素进入invert栈
        num=invert.top();
        //invert.pop();//删掉先进的元素
        
        while(!invert.empty())
        {
            old.push(invert.top());
            invert.pop();
        }//更新old栈
        return num; 
    }
    
    /** Returns whether the queue is empty. */
    bool empty() 
    {
        return old.empty();
    }

private:
     stack<int> old,invert;
};


int main()
{
	MyQueue A;
	A.push(1);
	A.push(2);
	A.push(3);
	cout<<A.pop()<<endl; 
	cout<<A.peek();
	return 0;
}

