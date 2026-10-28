class Solution {
public:
        int binaryGap(int n) {
        while((n&1)!=1)
        {
            n = n>>1;
        }
        int len = 0;
        int maxlen = 0;

        while(n!=0)
        {
            if((n&1) == 1)
            {
                maxlen = max(maxlen,len);
                len = 1;
            }
            else
            {
                len++;
            }
            n = n>>1;
        } 
        return maxlen;
    }
};