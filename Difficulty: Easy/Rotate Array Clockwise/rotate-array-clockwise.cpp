class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        int n = arr.size();
        k = k%n;
        if(n==1)
            return;
        
        reverse(arr.begin(), arr.begin()+(n-k));
        reverse(arr.begin()+(n-k), arr.end());
        reverse(arr.begin(),arr.end());
        
    }
};
