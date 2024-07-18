#include <iostream>
using namespace std;

bool palindromeCheck(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        i++;
        j--;
        return palindromeCheck(str, i, j);
    }
}

int main()
{

    string str = "meetteem";

    bool ans = palindromeCheck(str, 0, str.length() - 1);

    if (ans)
    {
        cout << "The String is Palindrome :)" << endl;
    }
    else
    {
        cout << "The String is not Palindrome :(" << endl;
    }

    return 0;
}