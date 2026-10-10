class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int large=nums[0];
        int slarge=0;
        int n=nums.size();

        for(int i=0;i<n;i++)
            {
                if(nums[i]>large){
                    slarge=large;
                    large=nums[i];
                }
                else if(nums[i]>slarge && nums[i]<large){
                    slarge=nums[i];
                }
                
            }
        if(slarge==0)
            return -1;
        
        return slarge;
      
    }
};
