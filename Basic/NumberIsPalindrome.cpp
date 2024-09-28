#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int x = num;

    if (num < 0)
    {
        return 0;
    }

    int rem;
    int ans = 0;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
    }

    if (x == ans)
    {
        return 1;
    }
    return 0;
}

int main()
{

    int num;
    cout << "Enter the number to check for palindrome or not : ";
    cin >> num;

    bool ans = isPalindrome(num);

    if (ans == 1)
    {
        cout << "The number is palindrome" << endl;
    }
    else
    {
        cout << "The number is not palindrome" << endl;
    }

    return 0;
}