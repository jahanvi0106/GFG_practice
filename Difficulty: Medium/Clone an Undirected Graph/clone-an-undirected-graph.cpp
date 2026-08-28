/*
class Node {
  public:
    int val;
    vector<Node*> neighbors;

    Node() { val = 0; }

    Node(int val) { val = val; }

    Node(int val, vector<Node*> neighbors) {
        val = val;
        neighbors = neighbors;
    }
};
*/

class Solution {
  public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return nullptr;
        map<Node*, Node*> mp;
        queue<Node*> q;
        
        // Clone the source node
        Node* clone = new Node();
        clone->val = node->val;
        mp[node] = clone;
        q.push(node);
        
        while(!q.empty()){
            Node* u = q.front();
            q.pop();

            for (auto neighbor : u->neighbors) {
                // Clone neighbor if not already cloned
                if (mp.find(neighbor) == mp.end()) {
                    Node* neighborClone = new Node();
                    neighborClone->val = neighbor->val;
                    mp[neighbor] = neighborClone;
                    q.push(neighbor);
                }
                // Link clone of neighbor to clone of current node
                mp[u]->neighbors.push_back(mp[neighbor]);
            }
        }
        return mp[node];
    }
};
