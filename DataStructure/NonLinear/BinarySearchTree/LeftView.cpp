#include <iostream>
#include <vector>
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
    
    cout<<"Enter the data for left Node : ";
    temp -> left = BuildTree();
    
    cout<<"Enter the data for right Node : ";
    temp -> right = BuildTree();
    
    return temp;
}

void InOrder(Node * root){
    
    if(root == NULL){
        return;
    }    
    
    InOrder(root -> left);
    cout<< root -> data <<" ";
    InOrder(root -> right);
}

void solve(Node * root, vector <int> &ans, int level){
    if(root == NULL){
        return;
    }
    
    if(ans.size() == level)
    ans.push_back(root -> data);
    solve(root -> left,ans,level + 1);
    solve(root -> right,ans, level + 1);
}

void LeftView(Node * root){
    vector <int> ans;
    solve(root,ans,0);
    
    for(int i = 0 ; i < ans.size() ; i ++){
        cout<< ans[i] << " ";
    }
}

int main() {
    
    cout<<"Enter the root Node : ";
    Node * root = NULL;
    root = BuildTree();
    
    InOrder(root);
    
    cout<<endl;
    
    LeftView(root);
    
    return 0;
}