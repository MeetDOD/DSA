#include <iostream>
using namespace std;

bool checkForPalindrome(char name[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        if (tolower(name[start]) != tolower(name[end]))
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

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[100];

    cout << "Enter Your name : ";
    cin >> name;

    cout << "Your name is : " << name << endl;

    int length = getLength(name);

    cout << "The length of the name is : " << length << endl;

    if (checkForPalindrome(name, length) == 1)
    {
        cout << "Hey ! your name is palindrome :)";
    }
    else
    {
        cout << "Hey ! your name is not palindrome :(";
    }

    return 0;
}