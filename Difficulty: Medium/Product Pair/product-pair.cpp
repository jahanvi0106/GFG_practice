//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        map<long long, int> m;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            m[arr[i]]=1;
        }
         
        for(int i=0; i<n; i++){
            if(x%arr[i]==0){
                if(m.find(x/arr[i])!=m.end())
                    return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        long long x;
        cin >> x;
        cin.ignore(); // To discard any leftover newline characters

        Solution ob;
        auto ans = ob.isProduct(arr, x);
        cout << (ans ? "true\n" : "false\n");
    }
    return 0;
}
// } Driver Code Ends