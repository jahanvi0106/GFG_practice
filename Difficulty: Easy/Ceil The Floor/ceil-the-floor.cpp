//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> arr) {
        int l=-1, s=-1;
        int n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]==x){
                l=arr[i];
                s=arr[i];
                break;
            }
            if(arr[i]>x && (l==-1 || arr[i]<=l)){
                l=arr[i];
            }
            else if(arr[i]<x && arr[i]>=s){
                s=arr[i];
            }
        }
        vector<int> ans;
        ans.push_back(s);
        ans.push_back(l);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends