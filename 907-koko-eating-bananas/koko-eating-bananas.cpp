class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int k;
        while(low<=high)
        {  int mid = (low+high)/2;
            long long hours = 0;
            for(int i=0;i<n;i++)
            {
               hours = hours + ceil((double)piles[i]/mid);
            }
            if(hours>h)
            {
                low = mid+1;
            }
            else
            {
               k = mid;
               high = mid-1;
            }
        }return k;
    }
};