class Solution {
  public:
    void printDiamond(int n) {
        int s=n-1;
        for(int i=0; i<n; i++){
            
            for (int j=0; j<s; j++){
                cout<<" ";
            }
            for (int j=0; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
            s--;
        }
        for(int i=n-1; i>=0; i--){
            
            for (int j=0; j<=s; j++){
                cout<<" ";
            }
            for (int j=i; j>=0; j--){
                cout<<"* ";
            }
            cout<<endl;
            s++;
        }
    }
};