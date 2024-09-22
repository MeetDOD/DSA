#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;
        
    Node(int value){
        data = value;
        next = NULL;
    }
};

void insertStart(Node * &head, int data){
    Node * newData = new Node(data);
    Node * temp = head;
    
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newData;
}

bool isLinkedListAreEqual(Node * head1, Node * head2){
    while(head1 && head2){
        if(head1 -> data != head2 -> data){
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    return (head1 == NULL && head2 == NULL);
}

void traversal(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL";
}


int main() {
    
    Node * head1 = new Node(1);
    insertStart(head1,2);
    insertStart(head1,3);
    insertStart(head1,4);
    
    Node * head2 = new Node(1);
    insertStart(head2,2);
    insertStart(head2,3);
    insertStart(head2,4);

    traversal(head1);
    cout<<endl;
    traversal(head2);
    cout<<endl;
    cout<<"The linked list are : "<<isLinkedListAreEqual(head1,head2)<<endl;
    
    return 0;
}