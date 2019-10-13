class Solution 
{
public:
    string complexNumberMultiply(string a, string b) 
    {
        int s1,s2,s3,s4;
        for(int i=0;i<a.length()-2;i++)
        {
            if(a[i]=='+')
            {
                s1=stoi(a.substr(0,i));
                s2=stoi(a.substr(i+1,a.length()-2-i));
                break;
            }
        }
        for(int i=0;i<b.length()-2;i++)
        {
            if(b[i]=='+')
            {
                s3=stoi(b.substr(0,i));
                s4=stoi(b.substr(i+1,b.length()-2-i));
                break;
            }
        }          
        string res;
        res=to_string(s1*s3-s2*s4)+"+"+to_string(s1*s4+s2*s3)+"i";
        return res;
    }
};