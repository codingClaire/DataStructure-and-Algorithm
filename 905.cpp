/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*int* sortArrayByParity(int* A, int ASize, int* returnSize) 
{
	int res[5000+5];
	for(int i=0;i<5005;i++)
		res[i]=-1;
	for(int i=0;i<ASize;i++)
	{
		if(A[i]%2==0)
			res[i]=A[i];
		else res[ASize-1-i]=A[i];
	}    
	
	int *sab;
	*returnSize=ASize;
	int cnt=ASize;
	sab=(int*)malloc(cnt*sizeof(int));
	int j=0;
	for(int i=0;i<5005;i++)
	{
		if(res[i]!=-1)
			sab[j++]=res[i];
	}
	return sab; 	
}*/

#include<cstdio>
#include<stdlib.h>

int* sortArrayByParity(int* A, int ASize, int* returnSize) 
{
    int *sab;
	*returnSize=ASize;
	sab=(int*)malloc(ASize*sizeof(int));
	for(int i=0;i<ASize;i++)
		sab[i]=-1;
	int j=0,f=0;
	for(int i=0;i<ASize;i++)
	{
		if(A[i]%2==0)
			sab[j++]=A[i];
		else 
		{
			sab[ASize-f-1]=A[i];
			f++;	
		}
	
	}    
	/*	for(int k=0;k<ASize;k++)
			printf("%d ",sab[k]);
		printf("\n");*/
	return sab; 	
}

int main()
{
	int a[4]={1,3,4,2};
	int b;
	int *siz=&b;
	sortArrayByParity(a,4,siz);
	printf("%d",b);
	return 0;
}
