#include <iostream>
#include <stack>
using namespace std;

int minAddToMakeValid(string str){
    stack<char> temp;
    int count = 0;
    
    for(int i = 0; i<str.size(); i++){
        if(str[i] == '('){
            temp.push(str[i]);
        }else{
            if(temp.empty()){
                count++;
            }else{
                temp.pop();
            }
        }
    }
    return count + temp.size();
}

int main() {
    
    string str = "(())((";
    
    cout<<minAddToMakeValid(str)<<endl;
    
    return 0;
}