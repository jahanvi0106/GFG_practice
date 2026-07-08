class Solution {
  public:
    int countRevPairs(vector<int> &arr) {
        int n = arr.size();
        vector<int> temp(n);
        int ans = merge_Sort(arr,temp,0,n-1);
        return ans;
    }
    
    int  merge(vector<int> &arr, vector<int> &temp, int left, int mid,int right)
    {
        int  inv_count=0;
        int  i = left;
        int  j = mid;
        int  k = left;
        while((i <= mid-1) && (j <= right)){
            if(arr[i] <= arr[j]){
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
            }
        }
        while(i <= mid - 1)
            temp[k++] = arr[i++];
    
        while(j <= right)
            temp[k++] = arr[j++];
    
        for(i = left ; i <= right ; i++)
            arr[i] = temp[i];
        
        return inv_count;
    }
    int countPairs(vector<int> &arr, int low, int mid, int high) {
        int right = mid + 1;
        int cnt = 0;
        for (int i = low; i <= mid; i++) {
            while (right <= high && arr[i] > 2 * arr[right]) right++;
            cnt += (right - (mid + 1));
        }
        return cnt;
    }
    
    int merge_Sort(vector<int> &arr, vector<int> &temp, int left, int right)
    {
        int  mid, cnt = 0;
        if(right > left)
        {
            mid = (left + right)/2;
            cnt += merge_Sort(arr,temp,left,mid);
            cnt += merge_Sort(arr,temp,mid+1,right);
            cnt += countPairs(arr,left,mid,right);
            merge(arr,temp,left,mid+1,right);
        }
        return cnt;
    }

};