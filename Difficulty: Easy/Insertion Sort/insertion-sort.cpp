class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(arr[i]>arr[j])
                    swap(arr[i],arr[j]);
            }
        }
        
    }
};