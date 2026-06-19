class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int c=0;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                arr[c++]=arr[i];
            }
        }
        while(c<n){
            arr[c++]=0;
        }
        
    }
};