#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int a[N];

struct save_tuple{
    //单调栈的元素
    int index;
    int num;
}t[N]; 

struct res{
    //结果集
    int left_min;
    int right_min;
}result[N];

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        t[i].index=i;
        t[i].num=a[i];
    }
    stack<save_tuple> m; //单调栈：栈顶元素最大，单调递减
    for(int i=0;i<n;i++){
        save_tuple tmp;
        tmp.index=i;
        tmp.num=a[i];
        cout<<i<<" "<<a[i]<<endl;
        while(!m.empty()&&m.top().num>tmp.num){
            int res_index=m.top().index;
            m.pop();
            result[res_index].left_min=m.empty()?-1:m.top().index;
            result[res_index].right_min=i;
        }
        m.push(tmp);
    }
    //清算阶段
    while(!m.empty()){
        int res_index=m.top().index;
        m.pop();
        result[res_index].left_min=m.empty()?-1:m.top().index;
        result[res_index].right_min=-1;
    }
    for(int i=0;i<n;i++){
        cout<<"("<<result[i].left_min<<","<<result[i].right_min<<")"<<endl;
    }
    return 0;
}
/*
7
3 4 1 5 6 2 7
*/