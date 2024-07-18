#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str){
    stack<char> st;
    
    for(int i = 0 ; i<str.size() ; i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
           st.push(str[i]); 
        }else{
            if(st.empty()){
                return 0;
            }else if(str[i] == ')'){
                if(st.top() != '('){
                    return 0;
                }else{
                    st.pop();
                }
            }else if(str[i] == ']'){
                if(st.top() != '['){
                    return 0;
                }else{
                    st.pop();
                }
            }else if(str[i] == '}'){
                if(st.top() != '{'){
                    return 0;
                }else{
                    st.pop();
                }
            }
        }
    }
    return st.empty();
}

int main() {
    
    string str = "(){}[";
    
    cout<<"The Parentheses is : "<<isValid(str)<<endl;

    return 0;
}