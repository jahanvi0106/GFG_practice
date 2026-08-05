class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        int n = s1.size();
        int m = s2.size();
        
        if(n!=m)
            return false;
        else{
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            int i=0;
            while(i<n){
                if(s1[i]!=s2[i])
                    return false;
                i++;
            }
            return true;
        }
        
    }
};