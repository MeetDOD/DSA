#include <iostream>
using namespace std;

int reverse(int num)
{
    int ans = 0;
    int rem;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
    }
    return ans;
}

int main()
{

    int num;
    cin >> num;

    int ans = reverse(num);

    cout << ans;

    return 0;
}