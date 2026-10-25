class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),
        [](vector<int>&a, vector<int>&b)
        {
            return a[1] < b[1];
        });

        int i=0;
        int count = 0;
        int next = 1;
        while(next<intervals.size())
        {
            if(intervals[i][1]>intervals[next][0])
            {
                next++;
                count++;
            }else
            {
                i = next;
                next++;
            }
        }
        return count;
    }
};