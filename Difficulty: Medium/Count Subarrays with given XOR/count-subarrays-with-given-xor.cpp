class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int xoR=0;
        int c=0;
        int n = arr.size();
        unordered_map<int, int> m;
        m[0]=1;
        
        for(int i=0; i<n; i++){
            xoR ^= arr[i];
            
            int target = xoR ^ k;
            
            if (m.find(target) != m.end()) 
                c += m[target];
            
            m[xoR]++;
        }
        return c;
    }
};