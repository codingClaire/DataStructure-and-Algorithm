#include<iostream>
#include<cstdio>
using namespace std;

int removeDuplicates(int* nums, int numsSize) 
{
	for(int i=1;i<numsSize;i++)
	{
		if(*(nums+i)==*(nums+i-1))   		
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
	printf("%d",removeDuplicates(nums,9));
	
	
	return 0;
}
