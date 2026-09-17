class Solution {
  public:
    void topoSortUtil(int v, vector<vector<int>>& adj, vector<bool>& visited,
                          stack<int>& st) {

        visited[v] = true;

        for (int i : adj[v]) {
            if (!visited[i])
                topoSortUtil(i, adj, visited, st);
        }
        
        st.push(v);
    }
    
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        stack<int> st;
        vector<bool> visited(V, false);

        vector<vector<int>> adj(V);
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
        }

        for (int i = 0; i < V; i++) {
            if (!visited[i])
                topoSortUtil(i, adj, visited, st);
        }
        
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }
};