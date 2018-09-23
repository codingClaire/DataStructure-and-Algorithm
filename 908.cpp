#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) 
    {
        //vector<int> B(A.begin(),A.end());
        //sort(B.begin(),B.end());
        sort(A.begin(),A.end());
        int s1=A[0]+K;
        int s2=A[A.size()-1]-K;
	    if(s2>s1) return (s2-s1);
	    else return 0;
    }
};

int main()
{
	int array[3]={2,3,7};
	vector<int> A(array,array+3);
	int k=1;
	Solution first;
	cout<<first.smallestRangeI(A,k);
	return 0;
}
