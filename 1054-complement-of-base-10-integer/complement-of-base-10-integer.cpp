class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        {
            return 1;
        }
        int p = n;
        int x=0;
        while(p!=0)
        {
            x = x<<1;
            x = x|1;
            p = p>>1;
        }
        int ans = n^x;
        return ans;
    }
};