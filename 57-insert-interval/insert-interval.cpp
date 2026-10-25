class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
         intervals.push_back(newInterval);
         sort(intervals.begin(),intervals.end());
        int i=0;
        int next = 1;
        while(next<intervals.size())
        {
            if(intervals[i][1]>=intervals[next][0] && intervals[i][1]<=intervals[next][1])
            {   
                intervals[i][1] = intervals[next][1];
                intervals.erase(intervals.begin()+next);
            }
            else if(intervals[i][1]>=intervals[next][0] && intervals[i][1]>intervals[next][1])
            {
                 intervals.erase(intervals.begin()+next);
            }
            else
            {
                i = next;
                next++;
            }
        }
        return intervals;
    }
};