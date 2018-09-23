#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int smallestRangeII(vector<int>& A, int K) 
    {
        sort(A.begin(),A.end());
        int min=A[A.size()-1]-A[0],s1,s2;
        for(int i=0;i<A.size();i++)
        {
        	s1=A[i]+K;
        	s2=A[A.size()-1]-K;
        	if(s2>s1&&s2-s1<min)
        		min=s2-s1;
			else break; 
		}
		return min;
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
