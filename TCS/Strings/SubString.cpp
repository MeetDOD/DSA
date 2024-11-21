#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name = "god";
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

    return 0;
}