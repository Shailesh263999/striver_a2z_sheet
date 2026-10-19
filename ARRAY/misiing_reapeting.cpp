
class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n = nums.size();

        long long sum = 0, sumSq = 0;

        for (long long x : nums) {
            sum += x;
            sumSq += x * x;
        }

        long long expectedSum = n * (n + 1) / 2;
        long long expectedSq = n * (n + 1) * (2 * n + 1) / 6;

        // repeating - missing
        long long diff = sum - expectedSum;

        // repeating^2 - missing^2
        long long sqDiff = sumSq - expectedSq;

        long long sumRM = sqDiff / diff;

        long long repeating = (diff + sumRM) / 2;
        long long missing = repeating - diff;

        return {(int)repeating, (int)missing};
    }
};
