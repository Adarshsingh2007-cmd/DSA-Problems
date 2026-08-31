class Solution {
public:
    int findMin(vector<int>& nums) {
         int n = nums.size();
        int low=0;
        int high = n-1;
        int minvalue = INT_MAX;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[low]<=nums[mid])
            {
                minvalue = min(minvalue,nums[low]);
                low = mid+1;
            }else
            {
                minvalue = min(minvalue,nums[mid]);
                high = mid-1;
            }
        }return minvalue;
    }
};