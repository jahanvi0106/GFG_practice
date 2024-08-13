//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        if(n==0 || n==1)
            return n;
        long long int l=1, h=n, ans;
        while(l<=h){
            long long m = (l+h)/2;
            if(m*m==n)
                return m;
            else if(m*m<n){
                l=m+1;
                ans=m;
            }
            else
                h=m-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends