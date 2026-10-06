#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {

        unordered_map<int, int> freq;

        // Count frequency
        for(int x : nums)
        {
            freq[x]++;
        }

        int maxFreq = 0;
        int answer = INT_MAX;

        // Find most frequent and smallest in case of tie
        for(auto it : freq)
        {
            int element = it.first;
            int frequency = it.second;

            if(frequency > maxFreq)
            {
                maxFreq = frequency;
                answer = element;
            }
            else if(frequency == maxFreq)
            {
                answer = min(answer, element);
            }
        }

        return answer;
    }
};
