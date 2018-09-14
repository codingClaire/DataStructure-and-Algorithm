int numJewelsInStones(char* J, char* S) 
{
	int sum=0;
	for(int i=0;i<strlen(S);i++)
	{
		for(int j=0;j<strlen(J);j++)
		{
			if(*(S+i)==*(J+j))
			{
				sum++;
				break;
			}	
				
		}
	}
	return sum; 
}




//Æ¥Åä×Ö·û´® 
/*int numJewelsInStones(char* J, char* S) 
{
	int sum=0;
	for(int i=0;i<strlen(S);i++)
	{
		int j=0;
		do
		{
			j++;
		}while(*(J+j)!=*(S+i+j));
		if(j==strlen(J))	
		{
			sum++;
			break;		
		}
	}
	return sum;
}*/ 
