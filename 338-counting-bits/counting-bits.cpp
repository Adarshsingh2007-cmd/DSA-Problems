class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans = {0};
        for(int i=1;i<=n;i++)
        {
            int t = 0;
            int num = i;
        while(num!=0){
        if((num&1)==1)
        {
           t = t+1;
        }
        num = num>>1;
        }
        ans.push_back(t);
        }

        return ans;
    }
};