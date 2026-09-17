class Solution {
    
    private: 
	    bool dfs(int node, int col, vector<int> &color, const vector<vector<int>> &adj) {
             color[node] = col; 

             for (auto it : adj[node]) {
                 if (color[it] == -1) {
                     if (!dfs(it, !col, color, adj)) return false; 
                 }
                 else if (color[it] == col) {
                     return false; 
                 }
             }
             return true; 
         }
	public:
		bool isBipartite(int V, vector<vector<int>> &edges){
		    // Build adjacency list from edge pairs
              vector<vector<int>> adj(V);
              for (const auto &edge : edges) {
                  adj[edge[0]].push_back(edge[1]);
                  adj[edge[1]].push_back(edge[0]);
              }

              // Use vector for dynamic color tracking
              vector<int> color(V, -1);

              // Handle disconnected components
              for (int i = 0; i < V; i++) {
                  if (color[i] == -1) {
                      if (!dfs(i, 0, color, adj)) 
                          return false; 
                  }
              }
              return true;
		}
   
};