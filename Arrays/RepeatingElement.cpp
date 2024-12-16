// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     vector <int> v ={1,2,3,4,5,3,2};

//     for(int i = 0 ; i < v.size() ; i++){
//         for(int j = i + 1 ; j < v.size() ; j++){
//             if(v[i] == v[j]){
//                 cout<<v[i];
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> num = {10, 30, 40, 20, 10, 20, 40, 10};
    vector<int> ans;

    unordered_map<int, int> umap;

    for (int i = 0; i < num.size(); i++)
    {
        umap[num[i]]++;
    }

    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        if (it->second > 1)
        {
            cout << it->first << " " << it->second << endl;
            ans.push_back(it->first);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}