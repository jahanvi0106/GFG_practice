class Solution {
  public:
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        
        int N = s.size();
        
        vector<pair<int,int>> a(N);

        for(int i=0;i<N;i++){
            a[i].first=f[i];
            a[i].second=i;
        }

        sort(a.begin(),a.end());

        int tym=a[0].first;
        vector<int> ans;

        ans.push_back(a[0].second+1);

        for(int i=1;i<N;i++){
            if(s[a[i].second]>tym){
                ans.push_back(a[i].second+1);
                tym=a[i].first;
            }
        }

        sort(ans.begin(),ans.end());

        return ans;
        
    }
};