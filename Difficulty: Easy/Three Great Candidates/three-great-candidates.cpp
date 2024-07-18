//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long maxProduct(vector<int> arr) {
        long long f=INT_MIN,s=INT_MIN,t=INT_MIN;
        int n = arr.size(); 
        for(int i=0; i<n; i++){
            if(f<=arr[i]){
                t=s;
                s=f;
                f=arr[i];
            }
            else if(s<=arr[i]){
                t=s;
                s=arr[i];
            }
            else if(t<=arr[i]){
                t=arr[i];
            }
            
        }
        long long ans = f*s*t;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends