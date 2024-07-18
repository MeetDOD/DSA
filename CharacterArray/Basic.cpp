#include <iostream>
using namespace std;

int getCharLength(char name[])
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

    char name[20];

    cout << "Enter Your name : ";
    cin >> name;

    cout << "Your name is : " << name << endl;

    // cin will stop the execution when you will
    //  1. tab \t
    //  2. space "__"
    //  3. newline/enter \n

    int ans = getCharLength(name);
    cout << "The length of the char is : " << ans << endl;

    return 0;
}