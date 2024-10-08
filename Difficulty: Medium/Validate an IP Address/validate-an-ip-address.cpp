//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            int counter = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '.') counter++;
        }
        if (counter != 3) return 0;

        unordered_set<string> st;
        for (int i = 0; i < 256; i++) st.insert(to_string(i));
        counter = 0;
        
        string temp = "";
        for (int i = 0; i < s.length(); i++) {

            if (s[i] != '.') {
                temp = temp + s[i];
            } else {
                if (st.count(temp) != 0) 
                    counter++;
                temp = "";
            }
        }
        if (st.count(temp) != 0) 
            counter++;

        if (counter == 4)
            return 1;
        else
            return 0;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends