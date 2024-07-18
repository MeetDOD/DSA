#include <iostream>
using namespace std;

void reverse(int i, int j, string& str){
    
    cout<<"Recursion Working : "<<str<<endl;
    
    if(i>j){
        return;
    }
    
    swap(str[i],str[j]);
    i++;
    j--;
    
    reverse(i,j,str);
}

int main() {
    
    string str = "kaka";
    
    reverse(0,str.length() - 1,str);
    
    cout<<"Final Answer : ";
    cout<<str<<endl;

    return 0;
}