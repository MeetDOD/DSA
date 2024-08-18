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

Node * BuildTree2(){
    
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

void PreOrder(Node * root){
    if(root == NULL){
        return;
    }
    
    cout<<root -> data<<" ";
    PreOrder(root -> left);
    PreOrder(root -> right);
}

bool isIdentical(Node * root, Node * root2){
    if(root == NULL && root2 == NULL){
        return 1;
    }
    
    if((root == NULL && root2 != NULL) || (root != NULL && root2 == NULL)){
        return 0;
    }
    
    if(root -> data != root2 -> data){
        return 0;
    }
    
    return isIdentical(root -> left,root2 -> left) && isIdentical(root -> right,root2 -> right);
}

int main(){
    
    
    cout<<"Enter the root node : ";
    Node * root = NULL;
    root = BuildTree();
    
    cout<<"Enter the root node : ";
    Node * root2 = NULL;
    root2 = BuildTree2();
    
    PreOrder(root);
    
    cout<<endl;
    
    PreOrder(root2);
    
    cout<<endl;
    
    cout<<"The tree is : "<<isIdentical(root,root2)<<endl;
    
    return 0;
}