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

void Total(Node * root, int &count){
    if(root == NULL){
        return;
    }
    
    if(root -> left != NULL || root -> right != NULL){
        count++;
    }
    
    Total(root -> left,count);
    Total(root -> right,count);
}

int countLeafNode(Node * root){
    int count = 0;
    Total(root, count);
    return count;
}

int main(){
    
    cout<<"Enter the root node data : ";
    
    Node * root = NULL;
    root = BuildTree();
    
    cout<<"The number of Non leaf Nodes is : "<<countLeafNode(root)<<endl;
    
    return 0;
}