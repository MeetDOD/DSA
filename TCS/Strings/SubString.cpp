#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name = "god godd";
    string sub = "god";
    int count = 0;

    for (int i = 0; i < name.length(); i++)
    {
        for (int j = 1; j <= name.length() - i; j++)
        {
            cout << name.substr(i, j) << endl;
            count++;
        }
    }

    cout << "The number of substr is : " << count << endl;

    for (int i = 0; i < name.size(); i++)
    {
        if (name.substr(i, sub.size()) == sub)
        {
            cout << "Found at index " << i << endl;
        }
    }

    return 0;
}