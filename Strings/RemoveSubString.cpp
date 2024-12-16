#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "god is good";
    string part = "od";

    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }

    cout << s << endl;

    return 0;
}
