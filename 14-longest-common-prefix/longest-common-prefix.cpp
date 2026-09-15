class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int minLen = strs[0].size();
        for(int i=0;i<strs.size();i++)
        {
            minLen = min(minLen,(int)strs[i].size());
        }
        for(int i=0;i<minLen;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=strs[0][i])
                {
                    return ans;
                }
            } ans+=strs[0][i];
        }return ans;
    }
};