class Solution {
  public:
    vector<int> getDivisors(int n) {
        // code here
        vector<int> ans;
        if(n==1){
            ans.push_back(1);
            return ans;
        }
        ans.push_back(1);
        ans.push_back(n);
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                ans.push_back(i);
                if(i!=n/i)
                    ans.push_back(n/i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};