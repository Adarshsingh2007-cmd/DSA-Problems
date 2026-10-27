class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)  return false;
        int cnt = 0;
        int t = 0;
        while(n!=0)
        {
            if(n&1==1)
            {
                cnt++;
            }else
            {
                t++;
            }
            n = n>>1;

        }
        if(cnt==1 && (t%2 == 0))
        return true;
        else
        return false;
    }
};