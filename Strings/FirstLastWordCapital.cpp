#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name;
    getline(cin, name);

    for (int i = 0; i < name.length(); i++)
    {
        if (i == 0 || i == name.length() - 1)
        {
            if (islower(name[i]))
            {
                name[i] = toupper(name[i]);
            }
        }
        if (name[i] == ' ')
        {
            if (islower(name[i + 1]))
            {
                name[i + 1] = toupper(name[i + 1]);
            }

            if (islower(name[i - 1]))
            {
                name[i - 1] = toupper(name[i - 1]);
            }
        }
    }

    cout << name << endl;

    return 0;
}