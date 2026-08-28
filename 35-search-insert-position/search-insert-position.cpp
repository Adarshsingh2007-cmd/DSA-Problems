class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int k;
        while(low<=high)
        {
            int mid = (low + high)/2;
            k = mid;
            if(nums[mid]==target)
            { 
                return mid;
            }
            else if(nums[mid]<target)
            {
                low = mid+1;
            }else
            {
                high = mid-1;
            }
        }
        if(nums[k]<target)
        {
            return k+1;
        }else
        {
            return k;
        }
        
    }
};