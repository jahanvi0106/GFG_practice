class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        
        int n= arr.size();
        for(int i=0; i<n-1; i++){
            int idx = i;
            for(int j=i+1; j<n; j++){
                if(arr[idx]>arr[j]){
                    idx=j;
                }
            }
            swap(arr[idx],arr[i]);
            
        }
        
    }
};