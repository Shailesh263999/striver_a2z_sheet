class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {

        int n=nums.size()-1;

        for(int i=0;i<n;i++)
            {
               if(nums[i]==target)
                   return i;
                
            }
     return -1;
    }
    
};
