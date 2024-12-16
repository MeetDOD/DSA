#include <bits/stdc++.h>
using namespace std;

int main()
{

    string name;
    getline(cin, name);

    string answer = "";

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] != 'a' and name[i] != 'e' and name[i] != 'u' and name[i] != 'i' and name[i] != 'o' and name[i] != 'A' and name[i] != 'E' and name[i] != 'I' and name[i] != 'O' and name[i] != 'U')
        {
            answer.push_back(name[i]);
        }
    }

    cout << answer << endl;

    return 0;
}