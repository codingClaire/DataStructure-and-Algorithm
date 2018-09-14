/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h> 

int* selfDividingNumbers(int left, int right, int* returnSize) 
{
    int res[10000]={0};
    int count=0;
    int temp,mod;
        for(int i=left;i<=right;i++)
        {
           int number=i;
            while(number!=0)
            {
                mod=number%10;
                if(mod==0||i%mod!=0)
                    break;
                else number/=10;
                
            }
            if(number==0)
                res[count++]=i;
        }
        *returnSize=count;//直接修改了returnSize指向的空间的值
        //相当于返回了所求数组的长度 
        int *sdn=(int*)malloc(count*sizeof(int));
        for(int i=0;i<count;i++)
           sdn[i]=res[i]; 
        return sdn;  
}

	return sdn;  
}

int main()
{
	int n=13;
	int* a=&n;
	selfDividingNumbers(1, 22,a);
return 0;
}
