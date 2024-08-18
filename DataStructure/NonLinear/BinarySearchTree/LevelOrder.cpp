#include <iostream>
#include <queue>
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
    
    cout<<"Enter the data at left of "<< data <<" : ";
    temp -> left = BuildTree();
    
    cout<<"Enter the data at right of "<< data <<" : ";
    temp -> right = BuildTree();
    
    return temp;
}

void LevelOrder(Node * root){
    queue<Node * > q;
    vector<int> ans;
    
    q.push(root);
    Node * temp;
    
    while(!q.empty()){
        temp = q.front();
        q.pop();
        
        ans.push_back(temp -> data);
        
        if(temp -> left){
            q.push(temp -> left);
        }
        
        if(temp -> right){
            q.push(temp -> right);
        }
    }
    
    for(int i = 0 ; i < ans.size() ; i++){
        cout<< ans[i] <<" ";
    }   
}

int main() {
    
    cout<<"Enter the root node : ";
    
    Node * root = NULL;
    root = BuildTree();
    
    LevelOrder(root);

    return 0;
}