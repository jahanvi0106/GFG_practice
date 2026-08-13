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
    Node* sortedMerge(Node* head1, Node* head2) {
        Node* newh = new Node(-1);
        Node* temp = newh;
        
        while(head1 && head2){
            if(head1->data < head2->data){
                temp->next=head1;
                head1=head1->next;
                temp=temp->next;
            }
            else{
                temp->next=head2;
                head2=head2->next;
                temp=temp->next;
            }
        }
        while(head1){
            temp->next=head1;
            head1=head1->next;
            temp=temp->next;
        }
        
        while(head2){
            temp->next=head2;
            head2=head2->next;
            temp=temp->next;
        }
        return newh->next;
        
    }
};