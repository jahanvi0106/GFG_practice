//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to multiply two matrices
class Solution {
public:
    void Multiply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        int n = matrixA.size(); // Get the size of the matrix

        // Create a result matrix filled with 0s
        vector<vector<int>>res(n, vector<int>(n,0));

        // Iterate over rows of matrixA
        for(int i = 0; i < n; i++){

        	// Iterate over columns of matrixB
        	for(int j = 0; j < n; j++){

        		// Iterate over elements of common dimension (n)
        		for(int k = 0; k < n; k++){

        			// Multiply corresponding elements and add to result matrix
        			res[i][j] += matrixA[i][k] * matrixB[k][j];
        		}
           	}
        }

        // Update matrixA with the result matrix
        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		matrixA[i][j] = res[i][j];
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrixA(n, vector<int>(n,0));
		vector<vector<int>> matrixB(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixA[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixB[i][j];
			}
		}
		Solution ob;
		ob.Multiply(matrixA, matrixB);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrixA[i][j] <<" ";
			cout << "\n";
		}
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends