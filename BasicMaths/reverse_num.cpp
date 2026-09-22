class Solution {
public:
    int reverseNumber(int n) {


        int rev=0;

        if(n==0)
            return 1;

        while(n>0)
            {
               int dig=n%10;
                rev=rev*10+dig;
                n=n/10;
            }
      
        return rev;
    
    }
    
};
