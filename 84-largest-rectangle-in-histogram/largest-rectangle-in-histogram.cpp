class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.empty()) return 0;
        vector<int>nextsl;
        vector<int>presl;
        stack<int>st;
        for(int i=heights.size()-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                nextsl.push_back(heights.size());
            }else
            {
                nextsl.push_back(st.top());
            }
            
            st.push(i);
        }
        reverse(nextsl.begin(),nextsl.end());


        while(!st.empty())
        {
            st.pop();
        }

        for(int i=0;i<heights.size();i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                presl.push_back(-1);
            }else
            {
                presl.push_back(st.top());
            }
            
            st.push(i);
        }

        int maxArea = 0;

        for(int i=0;i<heights.size();i++)
        {  int area = heights[i]*(nextsl[i] - presl[i]-1);
            maxArea = max(area,maxArea);
        }


        return maxArea;

    }
};