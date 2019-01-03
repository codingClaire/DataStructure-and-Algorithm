#include<iostream>
#include<cstdio>

int findMaxConsecutiveOnes(int* nums, int numsSize) 
{
	int a[numsSize];
	for(int i=0;i<numsSize;i++)
		a[i]=0;
	int j=0;
     for(int i=0;i<numsSize;i++)
	  {
	  		if(*(nums+i)==1)
	  			a[j]++;	
			else j++;
	  }
	  int max=a[0];
	  for(int i=1;i<numsSize;i++)
	  {
	  	if(a[i]>max)
	  		max=a[i];
	  }
	  return max;
}

int main()
{
	int nums[16]={0,0,1,0,0,0,0};
	printf("%d",findMaxConsecutiveOnes(nums, 16));
}

