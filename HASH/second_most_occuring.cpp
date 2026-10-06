
class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {

        unordered_map<int, int> freq;

        // Count frequency
        for (int x : nums) {
            freq[x]++;
        }

        int highest = -1;
        int secondHighest = -1;

        int answer = INT_MAX;

        // Find 2nd highest frequency
        for (auto it : freq) {

            int element = it.first;
            int frequency = it.second;

            if (frequency > highest) {
                secondHighest = highest;
                highest = frequency;
            }
            else if (frequency > secondHighest &&
                     frequency < highest) {
                secondHighest = frequency;
            }
        }

        // Find smallest element having 2nd highest frequency
        for (auto it : freq) {

            int element = it.first;
            int frequency = it.second;

            if (frequency == secondHighest) {
                answer = min(answer, element);
            }
        }

        return answer;
    }
};
