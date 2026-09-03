class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans;
        while(low<=high)
        {
            int mid = (low+high)/2;
            long long sum = 0;
            for(int i=0;i<n;i++)
            {
               sum = sum + ceil((double)nums[i]/mid);

            }
            if(sum>threshold)
            {
                low = mid+1;
            }else
            {  ans = mid;
               high = mid-1;
            }
        }return ans;
    }
};