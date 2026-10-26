class Solution {
public:
    int hammingDistance(int x, int y) {
        int r = (x^y);
         int cnt = 0;
        while(r != 0){
        if((r&1)==1)
        {
           cnt = cnt+1;
        }
        r = r>>1;
        }return cnt;
    }
};