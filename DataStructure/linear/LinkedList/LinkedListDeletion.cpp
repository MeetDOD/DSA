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
    Node * temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void deleteStart(Node * &head){
    if(head == NULL){
        return;
    }
    
    Node * temp = head;
    head = temp -> next;
    delete(temp);
}

void deleteEnd(Node * &head){
    if(head == NULL){
        return;
    }
    
    if(head -> next == NULL){
        deleteStart(head);
        return;
    }
    
    Node * secondLastNode = head;
    while(secondLastNode -> next -> next != NULL){
        secondLastNode = secondLastNode -> next;
    }
    
    Node * lastNode = secondLastNode -> next;
    secondLastNode -> next = NULL;
    delete(lastNode);
}

void deleteBetween(Node * &head, int position){
    if(position == 1){
        deleteStart(head);
        return;
    }
    
    Node * previous = head;
    int count = 1;
    while(count < (position - 1)){
        previous = previous -> next;
        count++;
    }
    Node * current = previous -> next;
    previous -> next = current -> next;
    delete(current);
}

void traversal(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }cout<<"NULL";
}

int main() {
    
    Node * node = new Node(7);
    
    Node * head = node;
    Node * tail = node;
    
    insertStart(head,77);
    insertStart(head,777);
    insertStart(head,7777);
    
    deleteStart(head);
    deleteBetween(head,3);
    deleteEnd(head);
    
    traversal(head);

    return 0;
}