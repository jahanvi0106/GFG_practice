class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        map<int, int> m;
        int n = arr.size();
        
        
        for(int i=0; i<n; i++){
            m[arr[i]]++;
            // cout<<m[arr[i]]<<" ";
        }
        
        n = m.size();
        
        std::vector<std::vector<int>> ans(n, std::vector<int>(2, 0));
        int j=0;
        for (auto& i: m){
            // cout<<i.first<<" "<<i.second<<endl;
            ans[j][0]=i.first;
            ans[j++][1]=i.second;
        }
        return ans;
        
    }
};