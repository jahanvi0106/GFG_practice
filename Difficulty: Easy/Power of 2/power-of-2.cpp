class Solution {
  public:
    bool isPowerofTwo(int n) {
        
        // cout<<(n&n-1)<<endl;
        if((n&(n-1))!=0 || n==0)
            return false;
        else
            return true;
        
    }
};