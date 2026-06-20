class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int l=0, r=n-1;
        int sum=0;
        vector<int> ans;
        sort(arr.begin(), arr.end());
        while(l<r){
            sum = arr[l]+arr[r];
            if(sum<target)
                l++;
            if(sum>target)
                r--;
            if(sum==target){
               return true;
            }
        }
        return false;
    }
};