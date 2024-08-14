//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestCommonSubstr(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        int c[n+1][m+1];
        int ans=0;
        for(int i=0; i<=n; i++)
            c[i][0]=0;
        for(int i=0; i<=m; i++)
            c[0][i]=0;
            
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s1[i-1]==s2[j-1]){
                    c[i][j]=c[i-1][j-1]+1;
                }
                else{
                    c[i][j]=0;
                }
                ans = max(ans,c[i][j]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends