class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        int n = a.size();
        int m = b.size();
        int i=0,j=0;
        
        while(i<n && j<m){
           
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
                while(a[i]==a[i-1])
                    i++;
            }
            else if(a[i]>b[j]){
                ans.push_back(b[j]);
                j++;
                while(b[j]==b[j-1])
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
        while(i<n){
            if(ans.size()==0 || ans.back()!=a[i])
                ans.push_back(a[i]);
            i++;
        }
        while(j<m){
            if(ans.size()==0 || ans.back()!=b[j])
                ans.push_back(b[j]);
            j++;
        }
        
        return ans;
        
    }
};