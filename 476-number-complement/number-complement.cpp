class Solution {
public:
    int findComplement(int num) {
        int n = num;
        int x=0;
        while(n!=0)
        {
            x = x<<1;
            x = x|1;
            n = n>>1;
        }

        int ans = num^x;
        return ans;
    }
};