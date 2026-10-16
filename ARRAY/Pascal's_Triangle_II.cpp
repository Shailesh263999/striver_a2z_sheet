class solution
{
 public:
  vector<int>pascalTriangle(int r)
    {
      vector<int>ans;
      long long val=1;

      for(int i=0;i<r;i++);
      {
        ans.push_back(val);
        val=val*(r-i-1)/(i+1);
      }
    return ans;
 }
};
