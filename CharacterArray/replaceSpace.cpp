#include <iostream>
using namespace std;

int main()
{

    string s = "God Is Good";

    string temp = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('0');
            temp.push_back('0');
            temp.push_back('7');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }

    cout << s << endl;
    cout << temp;

    return 0;
}