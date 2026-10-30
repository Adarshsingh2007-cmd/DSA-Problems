class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
         int p = n-1;
         while(p>=2)
         {
            if((nums[p-1] + nums[p-2]) > nums[p])
            {
                return nums[p-2]+nums[p-1]+nums[p];
            }
            else
            {
                p--;
            }
         }
         return 0;
    }
};