class Solution {
  public:
  
    void backTrack(int start, vector<int>& arr, vector<int>& temp, vector<vector<int>>& ans){
        ans.push_back(temp);
        for(int i=start; i<arr.size(); i++){
            if(i>start && arr[i]==arr[i-1])
                continue;
            temp.push_back(arr[i]);
            backTrack(i+1, arr,temp,ans);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> findSubsets(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> temp;
        
        backTrack(0, arr, temp, ans);
        return ans;
        
    }
};