class Solution {
  public:
    vector<int> leaders(vector<int>& a) {
        vector<int> v;
        int n = a.size();
        int flag=a[n-1];
        for(int i=n-1; i>=0; i--){
            if(flag<=a[i]){
                flag=a[i];
                v.push_back(flag);
            }
        }
        reverse(v.begin(), v.end());
        return v;
        
    }
};