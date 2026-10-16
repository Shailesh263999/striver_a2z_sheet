class Solution {
public:
    int pascalTriangleI(int r, int c) {

        int ans=1;

        for(int i=0;i<c-1;i++)
            {
                ans=ans*(r-1-i)/(i+1);
            }
        return ans;
    }
};
