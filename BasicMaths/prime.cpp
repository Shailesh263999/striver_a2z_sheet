class Solution {	
public:
    bool checkPrime(int num) {
        
        if (num < 2)
            return false;

        return check(num, 2);
    }

private:
    bool check(int num, int divisor) {
        
        if (divisor * divisor > num)
            return true;

        if (num % divisor == 0)
            return false;

        return check(num, divisor + 1);
    }
};
