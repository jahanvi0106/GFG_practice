/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        
        Node* f = head;
        Node* s = head;
        bool flag = false;
        
        while(f && f->next){
            f = f->next->next;
            s = s->next;
            if(f==s){
                flag = true;
                break;
            }
        }
        
        if(flag){
            s = head;
            while(f!=s){
                f = f->next;
                s = s->next;
            }
            return s->data;
        }
        return -1;
        
    }
};