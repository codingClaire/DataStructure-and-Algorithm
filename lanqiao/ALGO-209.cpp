#include<bits/stdc++.h>
using namespace std;
//TODO:

int go[52];
int correct[11][52];
int card[52];
int s; //测试次数

int difference(int* card,int* corr){
    int step[52], go[52];
    memset(step, 0, sizeof(step));
    for (int i = 0; i < 52;i++){
        go[card[i]] = corr[i];
    }
    int dif;
    for (int i = 0; i < 52;i++){
        if(step[])
    }
        return dif;
}



int main(){
    for (int i = 0; i < 52;i++){

    }
    cin >> s;
    while(s--){
        for (int i = 0; i < 52;i++)
            cin >> card[i];
        for (int i = 0; i < 11;i++){
            diff = difference(card, correct[i]);
        }
    }

    return 0;
}