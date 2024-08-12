//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findMagicalNumber(vector<int>& arr) {
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            if(arr[i]==i)
                return arr[i];
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        int res = ob.findMagicalNumber(nums);

        cout << res << endl;
    }
}

// } Driver Code Ends