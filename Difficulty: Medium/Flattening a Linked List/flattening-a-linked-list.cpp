/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};*/

class Solution {
  public:
  
    struct Compare {
        bool operator()(Node* a, Node* b) { return a->data > b->data; }
    };
    
    Node* flatten(Node* head) {
        if (!head)
            return nullptr;
        priority_queue<Node*, vector<Node*>, Compare> pq;

        while (head) {
            pq.push(head);
            head = head->next;
        }
        Node dummy(-1);
        Node* tail = &dummy;

        while (!pq.empty()) {
            Node* curr = pq.top();
            pq.pop();
            if (curr->bottom)
                pq.push(curr->bottom);
            tail->bottom = curr;
            tail = curr;
            tail->next = nullptr;
        }
        
        tail->bottom = nullptr;
        return dummy.bottom;
    }
};