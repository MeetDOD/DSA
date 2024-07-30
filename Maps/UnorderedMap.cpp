#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    
    //Declaration
    unordered_map <string,int> uomap;
    
    //insertion
    //#1
    pair <string,int> p = make_pair("Dodiya",7);    //O(log(n))
    uomap.insert(p);
    
    //#2
    pair <string,int> p2("meet",17);
    uomap.insert(p2);
    
    //#3
    uomap["chacha"] = 18;
    // uomap["chacha"] = 19; //updation no duplicated key exits.
    
    //Search
    cout<<uomap["Dodiya"]<<endl;
    cout<<uomap.at("meet")<<endl;
    
    //MCQ
    // cout<<uomap.at("gav")<<endl; //by using at keyword gives error
    // cout<<uomap["gav"]<<endl; //form a gav -> 0 in the map
    // cout<<uomap.at("gav")<<endl; //now gives 0 because of above
    
    cout<<uomap.size()<<endl;
    cout<<uomap.count("Dodiya")<<endl;//gives 1 -> present, 0 -> not present.
    
    uomap.erase("chacha"); //deletion
    cout<<uomap.size()<<endl;
    
    //Traversal
    // for(auto &i:uomap){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    
    //iterator
    unordered_map<string,int> :: iterator it = uomap.begin();
    
    while(it != uomap.end()){
        cout<< it->first <<" " << it->second<<endl;
        it++;
    }
    
    
    return 0;
}