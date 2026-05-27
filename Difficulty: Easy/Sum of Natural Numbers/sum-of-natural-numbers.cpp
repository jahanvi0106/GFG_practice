class Solution {
  public:
    int sumOfNaturals(int n) {
        if(n==0)
            return 0;
        return sumOfNaturals(n-1)+n;
        
    }
};