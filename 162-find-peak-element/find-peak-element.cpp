class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<=high)
        { if(low==high)
        {
            return low;
        }
            int mid = (low+high)/2;
            if(nums[mid]<nums[mid+1])
            {
                low = mid+1;
            }else if(mid!=0 && nums[mid]<nums[mid-1] )
            {
                high = mid-1;
            }else
            {
                return mid;
            }
        }return -1;
    }
};