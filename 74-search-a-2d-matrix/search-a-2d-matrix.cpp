class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int high = m*n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            int p = mid/n;
            int q = mid%n;
            if(matrix[p][q]>target)
            {
                high = mid-1;
            }else if(matrix[p][q]==target)
            {
                return true;
            }else
            {
                low = mid+1;
            }
        }return false;
    }
};