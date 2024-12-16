#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        int value = n * i;
        sum = sum + value;
    }

    cout << "Sume of the table is : " << sum << endl;
    return 0;
}
