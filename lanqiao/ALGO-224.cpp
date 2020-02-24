#include<bits/stdc++.h>
using namespace std;
#define MAX 65536

vector<int> piece;
int vis[MAX];
int stick_num;
int n;

bool cmp(int a,int b){
    return a > b;
}

bool dfs(int sum,int cur,int res,int len){
    if(res==stick_num){
        return true;
    }
    for (int i = cur; i < n;i++){
        if(vis[i]||(i&&piece[i]==piece[i-1]&&!vis[i-1])){
            continue; //已经计入或与前一个等长且前一个未计入
        }
        if(piece[i]+sum==len){
            vis[i] = 1;
            if(dfs(0,0,res+1,len))
                return true;
            vis[i] = 0;
            return false;
        }
        if(piece[i]+sum<len){
            vis[i] = 1;
            if(dfs(piece[i]+sum,i+1,res,len))
                return true;
            vis[i] = 0;
            if(!sum)
                return false;
        }
    }
    return false;
}

int main(){
    while(cin>>n&&n){
        for (int i = 0; i < n;i++){
            int x;
            cin >> x;
            piece.push_back(x);
        }
        int sigmaValue = accumulate(piece.begin(),piece.end(),0);
        sort(piece.begin(), piece.end(), cmp);
        //for (vector<int>::iterator i = piece.begin(); i != piece.end();i++){
        //    cout << *i << endl;
        //}
        cout << endl;
        int flag = 0;
        for (int v = piece[0]; v <= sigmaValue/2;v++){
            //v=sigmaValue/2 注意取等 
            if(sigmaValue%v==0){
                memset(vis, 0, sizeof(vis));
                stick_num = sigmaValue / v; //木棍数
                if(dfs(0,0,0,v)){
                    cout << v << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==0){
            cout << sigmaValue << endl;
        }
        piece.erase(piece.begin(), piece.end());
    }
    return 0;
}