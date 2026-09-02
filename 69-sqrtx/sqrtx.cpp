class Solution {
public:
    int mySqrt(int x) { 
        int low = 1;
        int high = x;
        int ans;
        if(x==0)
        {
            return 0;
        }
        while(low<=high)
        {
        int mid = low + (high-low)/2;
        long long p = 1LL*mid*mid;
        if(p==x)
        {
            return mid;
        } else if(p>x)
        {
            high = mid-1;
        }else
        {   ans = mid;
            low = mid+1;
            
        }
        }  return ans;
    }
};