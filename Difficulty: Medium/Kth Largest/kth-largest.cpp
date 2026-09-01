class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        priority_queue<int> heap;
        
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            heap.push(arr[i]);
        }
        
        int i=0;
        while(i<k-1){
            heap.pop();
            i++;
        }
        return heap.top();
        
    }
};