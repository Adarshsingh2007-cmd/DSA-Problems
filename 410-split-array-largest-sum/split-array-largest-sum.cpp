class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(),nums.end());
        long long high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high)
        {   long long  sum = 0;
            int p = 1;
            int mid = (low+high)/2;
            for(int i=0;i<n;i++)
            {
              if((sum + nums[i])<=mid)
              {
                sum+=nums[i];
              }else
              {
                p++;
                sum = nums[i];
              }
            }
            if(p<=k)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }

        }return low;
    }
};