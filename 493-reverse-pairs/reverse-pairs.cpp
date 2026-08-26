class Solution {
public:
  int count = 0;
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;

        int i = low;
        int j = mid + 1;

        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        for (int k = 0; k < temp.size(); k++) {
            nums[low + k] = temp[k];
        }
    }

    void countPairs(vector<int>& nums, int low, int mid, int high) {
        int j = mid + 1;

        for (int i = low; i <= mid; i++) {
            while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }

             count += j - (mid + 1);
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high)
            return;

        int mid = low + (high - low) / 2;

        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);

        countPairs(nums, low, mid, high);

        merge(nums, low, mid, high);
    }
    int reversePairs(vector<int>& nums) {
    mergeSort(nums, 0, nums.size() - 1);
    return count;
}
};