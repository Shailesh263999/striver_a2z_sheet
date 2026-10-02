class Solution {
public:
    int addDigits(int num) {
        // Base case: single digit
        if (num < 10)
            return num;

        int sum = 0;

        // Calculate sum of digits
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        // Recursively reduce the sum
        return addDigits(sum);
    }
};
