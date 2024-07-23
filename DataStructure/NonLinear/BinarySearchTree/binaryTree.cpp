#include <iostream>
using namespace std;

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

Node* binaryTree(){
    
    int x;
    cin >> x;
    
    if(x == -1){
        return NULL;
    }
    
    Node * temp = new Node(x);
    
    //left
    cout<<"Enter the left child of "<< x <<" : ";
    temp -> left = binaryTree();
    
    //right
    cout<<"Enter the right child of "<< x <<" : ";
    temp -> right = binaryTree();
    
    return temp;
}

void preOrder(Node * root){
    if(root == NULL){
        return;
    }
    
    cout<<root -> data<<" "; 
    preOrder(root -> left);
    preOrder(root -> right);
}

void inOrder(Node * root){
    if(root == NULL){
        return;
    }
    
    inOrder(root -> left);
    cout<<root -> data<<" ";
    inOrder(root -> right);
}

void postOrder(Node * root){
    if(root == NULL){
        return;
    }
    
    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root -> data<<" ";
}

int main() {
    
    cout<<"Enter the root node : ";
    Node * root;
    root = binaryTree();
    
    cout<<"Preorder : ";
    preOrder(root);
    
    cout<<endl;
    
    cout<<"Inorder : ";
    inOrder(root);
    
    cout<<endl;
    
    cout<<"Postorder : ";
    postOrder(root);

    return 0;
}