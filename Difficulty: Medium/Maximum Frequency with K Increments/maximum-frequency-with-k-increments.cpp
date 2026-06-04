class Solution {
  public:
    int maxFrequency(int arr[], int n, int k) {
        
        sort(arr, arr+n);
        long long int l=0,r=0;
        long long int sum=0;
        long long int max_ans=0;
        
        for(r=0; r<n; r++){
            sum += arr[r];
            while(l+1<=r && (arr[r]*(r-l+1) > k+sum)){
                sum-=arr[l];
                l++;
            }
            max_ans = max(max_ans, r-l+1);
        }
        return max_ans;
    }
};