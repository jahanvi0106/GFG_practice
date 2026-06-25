class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> m;
        m[0]=1;
        int n = arr.size();
        int c=0;
        int s=0;
        for(int i=0; i<n; i++){
            s+=arr[i];
            int r = s-k;
            if(m.find(r) != m.end())
                c += m[r];
            m[s]++;
        }
        return c;
    }
};