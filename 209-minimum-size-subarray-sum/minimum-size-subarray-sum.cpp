class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int i = 0;
        int minlength = INT_MAX;
        for(int j=0;j<n;j++)
        {
          sum+=nums[j];
          while(sum>=target)
          {
            int length = (j-i+1);
            minlength = min(length,minlength);
            sum-=nums[i];
            i++;
          }
        }if(minlength==INT_MAX)
        {
            return 0;
        }else
        return minlength;
        
    }
};