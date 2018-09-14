char* reverseString(char* s) 
{
    int i=0,j=strlen(s)-1;
    char t;
    while(i<j)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }
    return s;
}
/*
char* reverseString(char* s) 
{
    int len=strlen(s);
	char p=(char *)calloc((len+1),sizeof(char));
	int j=0;
    for(int i=strlen(s)-1;i>=0;i--)
	{
		p[j++]=s[i];
	} 
	return p;
}*/

//³¬Ê± 
char* reverseString(char* s) 
{
	char tmp;
    for(int i=0;i<strlen(s)/2;i++)
	{
		tmp=s[i];
		s[i]=s[strlen(s)-1-i];
		s[strlen(s)-1-i]=tmp;
	} 
	return s;
}
