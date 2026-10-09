
class Solution {
public:
    void solve(vector<int>& nums, int low, int high) {
        if (low >= high) return;

        int pivot = nums[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (nums[j] < pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }

        swap(nums[i + 1], nums[high]);
        int p = i + 1;

        solve(nums, low, p - 1);
        solve(nums, p + 1, high);
    }

    vector<int> quickSort(vector<int>& nums) {
        solve(nums, 0, nums.size() - 1);
        return nums;
    }
};
