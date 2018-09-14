int findComplement(int num) 
{
	int a[33];
	int j=0,tol=0;
	do
	{
		a[j++]=num%2;
		num=num/2;
	}while(num!=0);
	for	(int i=0;i<j;i++)
	{
		if(a[i]==1)
			a[i]=0;
		else a[i]=1;
		tol+=a[i]*pow(2,i);
	}
	return tol; 
}
