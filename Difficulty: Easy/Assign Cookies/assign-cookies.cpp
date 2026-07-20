class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        // code here
        sort(greed.begin(),greed.end());
        sort(cookie.begin(), cookie.end());
        int i=0, j=0;
        int cnt=0;
        int n = greed.size();
        int m = cookie.size();
        while(i<n && j<m){
            if(greed[i]<=cookie[j]){
                cnt++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return cnt;
    }
};