class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp;

        int i = low;
        int j = mid + 1;

        // Compare both halves
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

        // Left half ke remaining elements
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        // Right half ke remaining elements
        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        // Sorted elements ko nums mein wapas daalo
        for (int k = low; k <= high; k++) {
            nums[k] = temp[k - low];
        }
    }

    void mergeSortHelper(vector<int>& nums, int low, int high) {

        // Base case
        if (low >= high)
            return;

        int mid = low + (high - low) / 2;

        // Left half
        mergeSortHelper(nums, low, mid);

        // Right half
        mergeSortHelper(nums, mid + 1, high);

        // Merge
        merge(nums, low, mid, high);
    }

    vector<int> mergeSort(vector<int>& nums) {

        mergeSortHelper(nums, 0, nums.size() - 1);

        return nums;
    }
};
