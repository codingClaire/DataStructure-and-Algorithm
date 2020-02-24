#include<cstring>
#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int numPara(string a){
        int len=a.length();
        int num=0;
        for(int i=0;i<len/2;i++){
            if(a[i]!=a[len-i-1])
                num++;
        }
        return num;
    }
        
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        vector<bool> res;
        for(int i=0;i<queries.size();i++){
            string subs=s.substr(queries[i][0],queries[i][1]-queries[i][0]+1);
            cout<<subs<<endl;
            int changenum=queries[i][2];
            cout<<numPara(subs)<<" "<<changenum<<endl;
            if(numPara(subs)>changenum)
                res.push_back(false);
            else
                res.push_back(true);
        }
        return res;
    }
};

int main()
{
    Solution A;
    string s="hunu";
    vector<vector<int>> q;
    int a[3]={0,3,1};
    vector<int> a1(a,a+3);
    q.push_back(a1);
    vector<bool> r;
    r=A.canMakePaliQueries(s,q);
    for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
    return 0;
}