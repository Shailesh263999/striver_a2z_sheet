class Solution {

public:
    int primeUptoN(int n) {

        int count = 0;

        for (int num = 2; num <= n; num++) {

            bool prime = true;

            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                count++;
            }
        }

        return count;
    }
};
    
