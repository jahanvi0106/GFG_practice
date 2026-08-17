class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int c=0;
        int as = a.size();
        int bs = b.size();
        int i=0;
        int j=0;
        while(i<as && j<bs && c<k){
                
            if(a[i]<=b[j]){
                i++;
                c++;
                if(c==k)
                    return a[i-1];
            }
            else{
                j++;
                c++;
                if(c==k)
                    return b[j-1];
            }
        }
        if(c<k){
            if(i<as){
                while(i<as && c<k){
                    i++;
                    c++;
                }
                return a[i-1];
            }
            if(j<bs){
                while(j<bs && c<k){
                    j++;
                    c++;
                }
                return b[j-1];
            }
        }
        return -1;
    }
};