class Solution {
public:
    bool isSorted(vector<int>& nums) {
        return check(nums, 0);
    }

private:
    bool check(vector<int>& nums, int i) {
        
        // Base condition
        if (i == nums.size() - 1)
            return true;
        
        // If current element is greater than next
        if (nums[i] > nums[i + 1])
            return false;
        
        // Recursive call
        return check(nums, i + 1);
    }
};
