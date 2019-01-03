#include<iostream>
#include<cstdio>
using namespace std;

int removeElement(int* nums, int numsSize, int val) 
{
    for(int i=0;i<numsSize;i++)
	{
		if(*(nums+i)==val)   		
		{
			for(int j=i;j<numsSize;j++)
				*(nums+j)=*(nums+j+1);
			numsSize--;
			i--;
		}
	}
	return numsSize;
}


int main()
{
	int nums[9]={0,0,1,1,2,2,3,3,4};
	printf("%d",removeElement(nums,9,3));
	
	
	return 0;
}
