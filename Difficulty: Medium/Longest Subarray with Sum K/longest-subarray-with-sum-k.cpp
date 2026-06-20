class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> prefixSum; 
        int sum = 0, m = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i]; 

            if (sum == k)
                m = i + 1;

            if (prefixSum.find(sum - k) != prefixSum.end()) {
                m = max(m, i - prefixSum[sum - k]);
            }

            if (prefixSum.find(sum) == prefixSum.end())
                prefixSum[sum] = i;
        }
        return m; 
    }
};