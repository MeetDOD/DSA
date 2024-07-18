#include <iostream>
using namespace std;

class Node{
  
  public:
    int data;
    Node * next;
    
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertNodeAtStart(Node * &head, int data){
    Node * temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertNodeAtEnd(Node * &tail, int data){
    Node * temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertAtAGivenPosition(Node * &tail, Node * &head, int position, int data){
    if(position == 1){
        insertNodeAtStart(head,data);
        return;
    }
    Node * temp = head;
    int count = 1;
    
    while(count < position -1){
        temp = temp -> next;
        count++;
    }
    
    if(temp -> next == NULL){
        insertNodeAtEnd(tail,data);
        return;
    }
    Node * nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void printLinkedList(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    
    Node * node1 = new Node(1);
    
    Node * head = node1;
    Node * tail = node1;
    
    insertNodeAtStart(head,10);
    insertNodeAtStart(head,100);
    insertNodeAtStart(head,1000);
    
    insertNodeAtEnd(tail,10);
    insertNodeAtEnd(tail,100);
    insertNodeAtEnd(tail,100);
    
    insertAtAGivenPosition(tail,head,5,7);

    printLinkedList(head);
    
    return 0;
}