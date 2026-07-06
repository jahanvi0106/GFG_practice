class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int sum=0;
        int ans=0;
        unordered_map<int, int> ps;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum==0){
                ans = i+1;
            }
            else{
                if(ps.find(sum) != ps.end()){
                    ans = max(ans, i - ps[sum]);
                }
                else
                    ps[sum]=i;
            }
        }
        return ans;
    }
};