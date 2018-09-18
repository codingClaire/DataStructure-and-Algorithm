#include<cstdio>
int totalFruit(int* tree, int treeSize) 
{ 
	int max=1;
    for(int i=0;i<treeSize-1;i++)//从第i棵树开始 
    {
    	int t1=tree[i],t2;
    	int tol=1,j;
		for(j=i+1;j<treeSize;j++)
    	{
			tol++;
    		if(tree[j]!=t1)
    		{
    			t2=tree[j];
    			break;
			}
		}//找到t2
		if(t1==0,t2==1) 
		{	
			max=2;
			return max;
		}
		for(int k=j+1;k<treeSize;k++)
		{
			if(tree[k]==t1||tree[k]==t2)
				tol++;
			else break;
		}//如果有第三个就排除 
		if(tol>max)
			max=tol;
	//	printf("%d %d %d \n",o[i].t1,o[i].t2,max);*/
	}
	return max;
}

/*int totalFruit(int* tree, int treeSize) 
{
	struct option
	{
		int tol;
		int t1,t2; 
	};
	option o[treeSize]; 
	int max=1;
    for(int i=0;i<treeSize-1;i++)//从第i棵树开始 
    {
    	o[i].t1=tree[i];
    	o[i].tol=1;
    	int j;
		for(j=i+1;j<treeSize;j++)
    	{
			o[i].tol++;
    		if(tree[j]!=o[i].t1)
    		{
    			o[i].t2=tree[j];
    			break;
			}
		}//找到t2
		for(int k=j+1;k<treeSize;k++)
		{
			if(tree[k]==o[i].t1||tree[k]==o[i].t2)
				o[i].tol++;
			else break;
		}//如果有第三个就排除 
		if(o[i].tol>max)
			max=o[i].tol;
	//	printf("%d %d %d \n",o[i].t1,o[i].t2,max);
	}
	printf("%d",max);
	return max;
}*/


int main()
{
	int a[11]={3,3,3,1,2,1,1,2,3,3,4};
	int b[4]={0,1,2,2};
	totalFruit(b,4);
	return 0;
}
