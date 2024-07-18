#include <iostream>
using namespace std;

class Stack{
  
  int *arr;
  int size;
  int top;
  
  public:
  
  Stack(int s){
    top = -1;
    size = s;
    arr = new int[s];
  }
  
  //printStack
  void printStack(){
    if(top == -1){
      cout<<"Stack is empty"<<endl;
    }else{
      for(int i = 0; i < top; i++){
        cout<<arr[i]<<" ";
      }cout<<endl;
    }
  }
  
  //Push
  void push(int value){
    if(top == size - 1){
      cout<<"Stack overflow"<<endl;
      return;
    }else{
      top++;
      arr[top] = value;
      cout<<"Element of value "<<value<<" is pushed in stack"<<endl;
    }
  }
  
  //Pop
  void pop(){
    if(top == -1){
      cout<<"Stack underflow"<<endl;
      return;
    }else{
      cout<<"Element of value "<<arr[top]<<" is poped from the stack"<<endl;
      top--;
    }
  }
  
  //peek
  int peek(){
    if(top == -1){
      cout<<"No element is present in the array"<<endl;
      return -1;
    }else{
      return arr[top];
    }
  }
  
  //isEmpty
  bool isEmpty(){
    return top == -1;
  }
  
  //isSize
  int isSize(){
    return top+1;
  }
  
};

int main(){
  
    Stack s(5);
    
    s.push(7);
    s.push(77);
    s.push(777);
    s.push(7777);
  
    s.printStack();
    
    s.pop();
    
    s.printStack();
    
    int ans = s.peek();
    cout<<"Peek element in the stack is : "<<ans<<endl;

    s.printStack();
    
    int emptyStack = s.isEmpty();
    cout<<"Is stack is empty : "<<emptyStack<<endl;
    
    int sizeStack = s.isSize();
    cout<<"The size of the stack is : "<<sizeStack<<endl;
    
    return 0;
}