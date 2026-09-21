class Solution {
public:
    int countOddDigit(int n) {
          
        int count=0;

        if(n==0)
            return 1;

        while(n>0)
            {
                int dig=n%10;
                
                if(dig%2!=0){
                    count++;
                }
                n=n/10;
            }
        
        return count;
    }
};
