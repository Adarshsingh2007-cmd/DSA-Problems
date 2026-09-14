class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string word = "";
        string ans = "";
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                word+=s[i];
            }else
            { if(word!=""){
                if(ans=="")
                {
                    ans = word;
                }else
                {
                 ans = word+" "+ans;}
                }
                word = "";}
            
        }if(word!="")
        {
            if(ans=="")
            {
                ans = word;
            }else
            {
                ans = word+" "+ans;
            }
        }
        return ans;
    }
};