#include <iostream>
using namespace std;

int main()
{

    long long num;
    cin >> num;

    if ((num & (num - 1)) == 0 && num > 0)
    {
        cout << "The number is power of 2" << endl;
    }
    else
    {
        cout << "The number is not a power of 2" << endl;
    }

    return 0;
}