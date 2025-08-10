class Solution {
  public:
  void printv(vector<int> & V){
        for(int v:V){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        int n1=a.size();
        int n2=b.size();
        int i=0,j=0;
        
        
        while(i<n1 && j<n2){
            
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
                while(a[i-1]==a[i])
                    i++;
            }
            else if(a[i]>b[j]){
                ans.push_back(b[j]);
                j++;
                while(b[j-1]==b[j])
                    j++;
            }
            
            else{
                if(ans.size()==0 || ans.back()!=a[i]){
                    ans.push_back(a[i]);
                }
                i++;
                j++;
                while(a[i-1]==a[i])
                    i++;
                while(b[j-1]==b[j])
                    j++;
            }
        }
        while(i<n1){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        while(j<n2){
            if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
        return ans;
    
    }
};