class Solution {	
public:
    vector<int> reverseArray(vector<int>& nums) {
        reverse(nums, 0, nums.size() - 1);
        return nums;
    }

private:
    void reverse(vector<int>& nums, int left, int right) {
        
        // Base condition
        if (left >= right)
            return;

        // Swap first and last
        swap(nums[left], nums[right]);

        // Recursive call
        reverse(nums, left + 1, right - 1);
    }
};
