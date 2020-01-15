class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="")
            return 0;
        int ret=-1;
        for(int i =0;i<haystack.length();i++){
            if(haystack[i]== needle[0]){
                int flag=1;
                for(int j=1;j<needle.length();j++){
                    if(haystack[i+j]!=needle[j]){
                        break;
                    }
                    flag++;
                }
               if(flag==needle.length()) 
                   ret=i;
            }
            if(ret!=-1)
                break;
        }
       return ret;
    }
};