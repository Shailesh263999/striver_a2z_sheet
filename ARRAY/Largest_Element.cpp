class Solution {
public:
    int largestElement(vector<int>& nums) {
        int large=nums[0];
        int n=nums.size();

        for(int i=0;i<n;i++)
            {
                if(nums[i]>large)
                    swap(nums[i],large);
            }
        return large;

    }
};
