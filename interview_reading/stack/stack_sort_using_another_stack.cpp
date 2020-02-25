#include <bits/stdc++.h>
using namespace std;

void showStack(stack<int> s)
{
    cout << "-----stack is -------" << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "---------------------" << endl;
}

int main()
{
    stack<int> st, help;
    int cur;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    //sort
    help.push(st.top());
    cur = st.top();
    st.pop();
    showStack(st);
    showStack(help);
    while (st.empty() == false)
    {
        if (st.top() < help.top())
        {
            //cout<<st.top()<<" is smaller than "<<help.top()<<endl;
            help.push(st.top());
            st.pop();
        }
        else
        {
            //cout<<st.top()<<" is bigger than "<<help.top()<<endl;
            cur = st.top();
            st.pop();
            while (help.size() != 0 && help.top() < cur)
            {
                st.push(help.top());
                help.pop();
            }
            help.push(cur);
            while (!st.empty() && st.top() < help.top())
            {
                help.push(st.top());
                st.pop();
            }
        }
        cout << "st:" << endl;
        showStack(st);
        cout << "help:" << endl;
        showStack(help);
        cout << "-------------------------------" << endl;
    }
    while (n--)
    {
        st.push(help.top());
        help.pop();
    }
    cout << "st:" << endl;
    showStack(st);
    cout << "help:" << endl;
    showStack(help);
    cout << "-------------------------------" << endl;
    return 0;
}