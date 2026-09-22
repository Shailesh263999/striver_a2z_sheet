class Solution {
public:
    int largestDigit(int n) {
        int large=0;
      
        if(n==0)
            return 1;

        while(n>0)
            {
             int dig=n%10;

                
                if(dig>large){
                    large=dig;
                }
            n=n/10;
            }
        
        return large;

    }
};
