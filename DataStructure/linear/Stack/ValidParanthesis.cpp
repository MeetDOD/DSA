#include <iostream>
#include <stack>
using namespace std;

bool isValidParanthesis(string str){
    stack<char> temp;
    
    for(int i=0;i < str.size();i++){
        if(str[i] == '('){
            temp.push(str[i]);
        }else{
            if(temp.empty()){
                return 0;
            }else{
                temp.pop();
            }
        } 
    }
    return temp.empty();
}

int main() {
    
    string str = "(()(()))";
    
    cout<<isValidParanthesis(str)<<endl;
    
    return 0;
}