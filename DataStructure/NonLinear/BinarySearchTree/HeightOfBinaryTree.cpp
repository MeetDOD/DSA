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

Node * BuildTree(){
    
    int data;
    cin >> data;
    
    if(data == -1){
        return NULL;
    }
    
    Node * temp = new Node(data);
    
    cout<<"Enter the left node data " << data <<" : ";
    temp -> left = BuildTree();
    
    cout<<"Enter the right node data " << data <<" : ";
    temp -> right = BuildTree();
    
    return temp;
}

int heightOfTree(Node *root) {
    if (root == NULL) {
        return 0;
    }
    
    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);
    
    return max(leftHeight, rightHeight) + 1;
}

int main(){
    
    cout<<"Enter the root node data : ";
    
    Node * root = NULL;
    root = BuildTree();
    
    cout<<"The height of the tree is : "<<heightOfTree(root)<<endl;

    return 0;
}