int hammingDistance(int x, int y) 
{
  	int a[33],b[33];
  	for(int i=0;i<33;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	int j=0,k=0;
	do
	{	
		a[j++]=x%2;
		x=x/2;
	}while(x!=0);
	do
	{	
		b[k++]=y%2;
		y=y/2;
	}while(y!=0);
	int sum=0;
	for(int i=0;i<33;i++)
	{
		if(a[i]!=b[i])
			sum++;
	}
	return sum;
}

