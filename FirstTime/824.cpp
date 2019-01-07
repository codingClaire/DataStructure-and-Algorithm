class Solution
{
public:
    bool isVowel(char a)
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
            return true;
        return false;
    }


    string toGoatLatin(string S)
    {
        string res;
        vector<string> word;
        int count=0;
        for(int m=0;m<S.length();m++)
        {
           if(S[m]==' ')
           {
               word.push_back(S.substr(count,m-count));
               count=m+1;
           }
        }//分割出单词
        word.push_back(S.substr(count,S.length()-count));
        for(int i=0;i<word.size();i++)
        {
            if(isVowel(word[i][0]))//是元音
                word[i].append("ma");
            else
            {
                word[i].append(1,word[i][0]);
                word[i].append("ma");
                word[i]=word[i].substr(1,word[i].length()-1);
            }
        }//每个单词的处理

        for(int i=0;i<word.size();i++)
        {
            word[i].append(i+1,'a');
        }
        res=word[0];
        for(int i=1;i<word.size();i++)
        {
            res+=" ";
            res+=word[i];
        }
        return res;
    }
};
