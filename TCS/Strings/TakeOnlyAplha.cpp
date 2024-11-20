#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string name;
    getline(cin,name);
    
    string answer ="";
    
    for(int i = 0 ; i < name.length() ; i++){
        if(isalpha(name[i])){
            answer.push_back(name[i]);
        }
    }
    
    cout<<answer<<endl;

    return 0;
}