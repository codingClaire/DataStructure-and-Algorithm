class Solution 
{
public:
	int getposition(char a)
	{ 
		/*string alpha1= "qwertyuiopQWERTYUIOP";//{'Q','W','E','R','T','Y','U','I','O','P','q','w','e','r','t','y','u','i','o','p'};
		string alpha2= "ASDFGHJKLasdfghjkl"; //{'A','S','D','F','G','H','J','K','L','a','s','d','f','g','h','j','k','l'}; 
		string alpha3= "ZXCVBNMzxcvbnm";//{'Z','X','C','V','B','N','M','z','x','c','v','b','n','m'};*/
        vector<char> alpha1= {'Q','W','E','R','T','Y','U','I','O','P','q','w','e','r','t','y','u','i','o','p'};
		vector<char> alpha2= {'A','S','D','F','G','H','J','K','L','a','s','d','f','g','h','j','k','l'}; 
		vector<char> alpha3= {'Z','X','C','V','B','N','M','z','x','c','v','b','n','m'};
        
		for(int i=0;i<alpha1.size();i++)
		{
			if (a==alpha1[i])
				return 1;
		}
		for(int i=0;i<alpha2.size();i++)
		{
			if(a==alpha2[i])
				return 2;
		}
		return 3;
	}
    vector<string> findWords(vector<string>& words) 
	{
    	vector<string> newwords;
    	
		for(int i=0;i<words.size();i++)
		{
			int pos=getposition(words[i][0]);
            int j;
			for(j=0;j<words[i].length();++j)
				if(getposition(words[i][j])!=pos) 
					break;
			if(j=words[i].length())
				newwords.push_back(words[i]);	
	    }
        return newwords;
    }
};




































/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 //À¬»ø 
/*char** findWords(char** words, int wordsSize, int* returnSize) 
{
	char alpha[3][20]={
	{'Q','W','E','R','T','Y','U','I','O','P','q','w','e','r','t','y','u','i','o','p'},
	{'A','S','D','F','G','H','J','K','L','a','s','d','f','g','h','j','k','l'},
	{'Z','X','C','V','B','N','M','z','x','c','v','b','n','m'}
	};
	
	for(int i=0;i<wordsSize;i++)
	{
		int	len=strlen(words[i]);
		int pos[len];
		int flag=1;
		for(int j=0;j<len;j++)
		{
			for(int k=0;k<3;k++)
			{
				for(int m=0;m<20;m++)
				{
					if(words[i][j]==alpha[k][m])
					{
						pos[j]=k;
						break;
					}
				}
			}
			if(pos[j+1]!=pos[j]&&j>1)
			{
				flag=0; 
		 		break;
		 	}
		}
		if(flag==1)
			printf("%s",words[i]);
	}    
}*/ 
