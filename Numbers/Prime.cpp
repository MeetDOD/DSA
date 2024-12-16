#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter the number : ";
    cin >> number;

    bool flag = 0;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "Non-Prime" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Prime";
    }

    return 0;
}