#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> &s){
    while(!s.empty()){
        cout<< s.top() <<" ";
        s.pop();
    }cout<<endl;
}

void insertAtBottom(stack<int> &ogStack, int x){
    
    stack<int> temp;
    
    while(! ogStack.empty()){
        temp.push(ogStack.top());
        ogStack.pop();
    }
    
    ogStack.push(x);
    
    while(! temp.empty()){
        ogStack.push(temp.top());
        temp.pop();
    }
}

int main() {
    
    stack<int> ogStack;
    
    ogStack.push(7);
    ogStack.push(77);
    ogStack.push(777);
    ogStack.push(7777);
    
    int x = 8;
    
    insertAtBottom(ogStack,x);
    
    cout<<"Stack after inserting "<<x<<" in the stack"<<endl;
    printStack(ogStack);

    return 0;
}