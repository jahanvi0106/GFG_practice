class Solution {
  public:
    int nthRoot(int n, int m) {
        int ans = m;
        if(m==0 || m==1)
            return m;
        while(ans!=0){
            if(pow(ans,n)==m)
                return ans;
            ans/=2;
        }
        return -1;
    }
};