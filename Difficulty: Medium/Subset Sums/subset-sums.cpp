class Solution {
  public:
    void findSums(int index, int currentSum, vector<int>& arr, vector<int>& sums) 
    {
        if (index == arr.size()) {
            sums.push_back(currentSum);
            return;
        }
        findSums(index + 1, currentSum + arr[index], arr, sums);
        findSums(index + 1, currentSum, arr, sums);
    }

    vector<int> subsetSums(vector<int>& arr) 
    {
        vector<int> sums;
        findSums(0, 0, arr, sums);
        sort(sums.begin(), sums.end());
        return sums;
    }
  };
