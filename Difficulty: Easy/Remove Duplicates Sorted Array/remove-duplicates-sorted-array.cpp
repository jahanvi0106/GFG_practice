class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans;
        ans.push_back(arr[0]);
        int j=0;
        for(int i=1; i<n; i++){
            if(arr[i]!=arr[j]){
                j++;
                ans.push_back(arr[i]);
                arr[j] = arr[i];
            }
        }
        return ans;
    }
};