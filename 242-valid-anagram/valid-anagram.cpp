class Solution {
public:
    bool isAnagram(string s, string t) {
      int m = s.size();
      int n = t.size();
      if(m!=n)
      {
        return false;
      }
      unordered_map<char,int>mp;
      for(int i=0;i<m;i++)
      {
        mp[s[i]]+=1;
      }  
      for(int i=0;i<n;i++)
      {
        if(mp.find(t[i])!=mp.end())
        {
            mp[t[i]]-=1;
        }else
        {
            return false;
        }if(mp[t[i]]<0)
        {
            return false;
        }
      }return true;

    }
};