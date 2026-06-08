class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        bool flag = false;
        for(int i=0; i<n; i++){
            flag = false;
            for(int j=0; j<n-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    flag = true;
                }
            }
            if(flag==false)
                break;
        }
    }
};