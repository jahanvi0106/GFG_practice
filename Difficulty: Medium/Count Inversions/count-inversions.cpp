class Solution {
  public:
  
    int inversionCount(vector<int> &arr) {
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
                inv_count = inv_count + (mid - i);
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
    
    int merge_Sort(vector<int> &arr, vector<int> &temp, int left, int right)
    {
        long long int  mid,inv_count = 0;
        if(right > left)
        {
            mid = (left + right)/2;
            inv_count += merge_Sort(arr,temp,left,mid);
            inv_count += merge_Sort(arr,temp,mid+1,right);
            inv_count += merge(arr,temp,left,mid+1,right);
        }
        return inv_count;
    }

};