#include <iostream>
using namespace std;

bool validCharacter(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    return 0;
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

bool isPalindrome(string s)
{

    string temp = "";

    for (int j = 0; j < s.length(); j++)
    {
        if (validCharacter(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }

    return checkPalindrome(temp);
}

int main()
{

    string s = "meet@teem";

    if (isPalindrome(s) == 0)
    {
        cout << "You are not palindrome :(" << endl;
    }
    else
    {
        cout << "You are a palindrome :)" << endl;
    }

    return 0;
}