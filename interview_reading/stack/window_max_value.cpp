#include<bits/stdc++.h>
using namespace std;
const int N=65535;
int a[N];
void showQueue(deque<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"-------------"<<endl;
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    deque<int> qmax;
    vector<int> res;
    for(int i=0;i<n;i++){
        while(!qmax.empty()&&a[qmax.front()]<=a[i]){
            qmax.pop_front();
        }
        qmax.push_front(i);
        /*
        注意这个错误的写法：没有考虑要先pop掉所有比当前小的 这里只pop了一个
        if(qmax.empty()||a[qmax.front()]>a[i]){
            qmax.push_front(i);
        }
        else{//遍历的a[i]更大时
            qmax.pop_front();
            qmax.push_front(i);
        }
        */
        if(qmax.back()==i-m){
            //超过窗口范围
            qmax.pop_back();
        }
        showQueue(qmax);
        if(i+1>=m){
            res.push_back(a[qmax.back()]);
        }
    }

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*
8 3
4 3 5 4 3 3 6 7
*/
