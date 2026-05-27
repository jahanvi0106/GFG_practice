class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        
        for(int i=0; i<n/2; i++){
            // cout<<arr[i]<<" "<<arr[n-i-1]<<"----"<<endl;
            arr[i]=arr[i]+arr[n-i-1];
            // cout<<arr[i]<<" ";
            arr[n-i-1]=arr[i]-arr[n-i-1];
            // cout<<arr[n-i-1]<<" ";
            arr[i]=arr[i]-arr[n-i-1];
            // cout<<arr[i]<<endl;
        }
        
    }
};