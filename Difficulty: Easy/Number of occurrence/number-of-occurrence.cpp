class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        
        int n = arr.size();
        int low = 0;
        int high = n-1;

        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);

        if(n==0)
            return 0;
        else{
            while(low<=high){
                int mid = (low+high)/2;
                if(target==arr[mid]){
                    ans[0]=mid;
                    high = mid-1;
                }
                else{
                    if(target<arr[mid])
                        high = mid-1;
                    else
                        low = mid+1;
                }
            }
            low = 0;
            high = n-1; 
            while(low<=high){
                int mid = (low+high)/2;
                if(target==arr[mid]){
                    ans[1]=mid;
                    low = mid+1;
                }
                else{
                    if(target<arr[mid])
                        high = mid-1;
                    else
                        low = mid+1;
                }
            }
        }
        if(ans[0]==-1 || ans[1]==-1)
            return 0;
        else
            return (ans[1]-ans[0]+1);
    }
};
