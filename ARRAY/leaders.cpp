class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;
        int maxi=INT_MIN:
        int n=nums.size();

        for(int i=n-1;i>=0;i--)
            {
                if(a[i]>maxi)
                    ans.push_back(a[i]);

                maxi=max(maxi,a[i]);
            }
        sort(sort.begin(),sort.end());
        return ans;
      
    }
};
