class Solution {
public:
    int titleToNumber(string s) 
	{
        char alpha[26]={'A','B','C','D','E','F','G','H','I','J',
		'K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		if(s.length()==1)
		{
			for(int i=0;i<26;i++)
				if(s[0]==alpha[i])
					return i+1;
		}
		else
		{
			int tol=0;
			for(int i=s.length()-1;i>=0;i--)
			{
				for(int j=0;j<26;j++)
				{
					if(s[i]==alpha[j])
						tol+=(j+1)*pow(26,s.length()-1-i);	
				}
			}
			return tol;
		}
        
    }
};

