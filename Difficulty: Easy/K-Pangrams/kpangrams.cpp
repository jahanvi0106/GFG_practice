//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        
        if(str.length()<26){
            return false;
        }
        
        int hash[26] = {0};
        
        for(int i=0; str[i]!='\0'; i++){
            hash[str[i]-'a']++;
        }
        
        int cnt=0;
        int sum=0;
        for(int i=0; i<26; i++){
            if(hash[i]==0)
                cnt++;
            sum+=hash[i];
        }
        if(cnt<=k && sum>=26)
            return true;
        else
            return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends