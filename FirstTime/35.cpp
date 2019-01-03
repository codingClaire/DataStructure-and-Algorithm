#include<iostream>
using namespace std;

int searchInsert(int* nums, int numsSize, int target) 
{
	int po;
    for(int i=0;i<numsSize;i++)
    {
    	if(target<*nums) 
		{
			po=0;	
			break;
		}
		if(target>*(nums+numsSize-1))
		{
			po=numsSize;
			break;
		}
		if(*(nums+i)==target)
    	{
    		po=i;
    		break;
		}
		else if((*(nums+i-1))<target&&(*(nums+i))>target)
		{
			po=i;
		}
	}
	return po;
}

int main()
{
	int nums[9]={1,2,6,7,9};
	printf("%d",searchInsert(nums, 5, 0));
	
	
	return 0;
}
