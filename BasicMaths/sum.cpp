class Solution {
public:
    int arraySum(vector<int>& nums) {
        return sum(nums, 0);
    }

    int sum(vector<int>& nums, int index) {
        // Base case
        if (index == nums.size()) {
            return 0;
        }

        // Recursive case
        return nums[index] + sum(nums, index + 1);
    }
};
