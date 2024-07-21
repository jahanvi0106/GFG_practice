//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> filterByDigits(const vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        for(int i=0; i<n; i++){
            int temp=arr[i];
            while(temp!=0){
                int a = temp%10;
                if(a!=1 && a!=2 && a!=3){
                    break;
                }
                temp/=10;
            }
            if(temp==0){
                ans.push_back(arr[i]);
            }
        }
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
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> result = ob.filterByDigits(arr);
        for (int x : result) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends