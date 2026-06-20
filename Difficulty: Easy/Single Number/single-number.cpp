class Solution {
  public:
    int getSingle(vector<int>& arr) {
        
        int n = arr.size();
        int x=0;
        for(int i=0; i<n; i++){
            x ^= arr[i];
        }
        return x;
    }
};