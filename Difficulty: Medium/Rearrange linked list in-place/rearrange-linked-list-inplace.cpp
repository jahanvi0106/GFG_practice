//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  
    void reverseUtil(Node* curr, Node* prev, Node** head){
    
        if (!curr->next) {
            *head = curr;
            curr->next = prev;
            return;
        }
        
        Node* next = curr->next;
        curr->next = prev;
        reverseUtil(next, curr, head);
        
    }

    void reverse(Node** head){
        if (!head)
            return;
        reverseUtil(*head, NULL, head);
    }
    
    Node *inPlace(Node *root) {
        Node* slaw=root;
        Node* fast=root;
        
        while(fast!=NULL && fast->next!=NULL){
            slaw=slaw->next;
            fast=fast->next->next;
        }
        // cout<<slaw->data<<endl;
        reverse(&slaw);
        // cout<<slaw->data<<endl;
        Node* temp1 = root;
        Node* temp2 = slaw;
        while(temp1!=NULL && temp2!=NULL){
            Node* n = new Node(temp2->data);
            n->next=temp1->next;
            temp1->next=n;
            temp1=temp1->next->next;
            temp2=temp2->next;
        }
        Node* temp=root;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        
        return root;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }
        Node *head = nullptr;
        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node *tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }

        Solution ob;
        Node *ans = ob.inPlace(head);
        printList(ans);
    }

    return 0;
}
// } Driver Code Ends