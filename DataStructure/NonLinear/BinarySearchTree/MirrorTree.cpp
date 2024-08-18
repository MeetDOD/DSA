#include <iostream>
using namespace std;

// O(n)
class Node{
    public:
        int data;
        Node * left;
        Node * right;
        
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node * BuildTree(){
    
    int data;
    cin >> data;
    
    if(data == -1){
        return NULL;
    }
    
    Node * temp = new Node(data);
    
    cout<<"Enter the left Node "<<data<<" : ";
    temp -> left = BuildTree();
    
    cout<<"Enter the right Node "<<data<<" : ";
    temp -> right = BuildTree();
    
    return temp;
}

void InOrder(Node * root){
    if(root == NULL){
        return;
    }
    
    InOrder(root -> left);
    cout<<root -> data<<" ";
    InOrder(root -> right);
}

void Mirror(Node * root){
    if(root == NULL){
        return;
    }
    
    swap(root -> left,root -> right);
    
    Mirror(root -> left);
    Mirror(root -> right);
}

int main(){
    
    
    cout<<"Enter the root node : ";
    Node * root = NULL;
    root = BuildTree();
    
    cout<<"The Original Tree : ";
    InOrder(root);
    
    Mirror(root);
    
    cout<<endl;
    
    cout<<"The Mirror Tree : ";
    InOrder(root);
    
    return 0;
}