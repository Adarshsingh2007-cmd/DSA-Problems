class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
       int m = mat.size();
       int n = mat[0].size();
       int low = 0;
       int high = n-1;
       while(low<=high)
       {
        int mid = (low + high)/2;
        int maxrow = 0;
        for(int i=1;i<m;i++)
        {
          if(mat[i][mid]>mat[maxrow][mid])
          {
            maxrow = i;
          }
        }if(mid>0 && mat[maxrow][mid-1]>mat[maxrow][mid])
        {
            high = mid-1;
        }else if(mid<n-1 && mat[maxrow][mid+1]>mat[maxrow][mid])
        {
            low = mid+1;
        }else
        {
            return {maxrow,mid};
        }
       } return {0};
    }
};