class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        int m = INT_MIN;
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(m<arr[i])
                m=arr[i];
        }
        int a[m+1]={0};
        for(int i=0; i<n; i++){
            a[arr[i]]=1;
        }
        int l=0;
        int ans=0;
        for(int i=0; i<m+1; i++){
            // cout<<a[i]<<" ";
            if(a[i]==1){
                l++;
                if(ans<l)
                    ans=l;
            }
            else{
                l=0;
            }
        }
        return ans;
    }
};