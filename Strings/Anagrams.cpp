#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Enter string one : " << endl;
    string s1;
    getline(cin, s1);

    cout << "Enter string second : " << endl;
    string s2;
    getline(cin, s2);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2)
    {
        cout << "The Strings are anagrams of each other" << endl;
    }
    else
    {
        cout << "The Strings are not anagrams of each other" << endl;
    }

    return 0;
}