//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string S) 
    {
        int arr[26];
        string s;
        for(int i=0; i<26; i++)
            arr[i]=0;
        
        for(int i=0; S[i]!='\0'; i++){
            if(arr[S[i]-'a']==0){
                s+=S[i];    
                arr[S[i]-'a']++;
            }
        }
        return s;
    }
	        
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends