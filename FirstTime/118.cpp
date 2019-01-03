#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) 
	{
        vector<vector<int> > solution(numRows);//��vector��ʾ��ά���� >> ���������м���Ͽո񣬷�ֹ��������Ϊ����������� 
        if(numRows==0) return solution; //ע�����0����� 
		if(numRows==1) 
		{
			solution[0].push_back(1);
			return solution;
		}
		else 
		{
			solution[0].push_back(1);
			solution[1].push_back(1);
			solution[1].push_back(1);
			for(int i=2;i<numRows;i++)
			{
				solution[i].push_back(1);
				for(int k=1;k<i;k++)
				{
					int tmp=solution[i-1][k-1]+solution[i-1][k];
					solution[i].push_back(tmp);
				} 
				solution[i].push_back(1);
			 } 
	
		}
	/*	for(int i=0;i<solution.size();i++)
		{
			for(int j=0;j<solution[i].size();j++)
			{
				cout<<solution[i][j]<<" ";	
			}
			cout<<endl;
		} */
		 return solution;
    }
};

int main()
{
	Solution A;
	A.generate(0);
 } 
