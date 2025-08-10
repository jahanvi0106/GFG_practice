class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        map<int,int> m;
        int n=arr.size();
        
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        
        for(int i=0; i<n; i++){
            int sec = target-arr[i];
            m[arr[i]]--;
            if(m[sec]>=1)
                return true;
        }
        return false;
        
    }
};