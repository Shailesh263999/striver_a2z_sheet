class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency of each element
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        int ans = nums[0];
        int maxFreq = 0;

        // Find maximum frequency
        // If frequency is same, choose smaller element
        for (auto it : freq) {
            if (it.second > maxFreq || 
                (it.second == maxFreq && it.first < ans)) {
                
                maxFreq = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};
