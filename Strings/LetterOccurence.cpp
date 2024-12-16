#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name;
    getline(cin, name);

    unordered_map<char, int> freq;

    for (int i = 0; i < name.length(); i++)
    {
        freq[name[i]]++;
    }

    for (auto itr = freq.begin(); itr != freq.end(); itr++)
    {
        cout << itr->first << " => " << itr->second;
        cout << endl;
    }

    return 0;
}