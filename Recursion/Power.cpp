#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans; // even
    }
    else
    {
        return a * ans * ans; // odd
    }

    // if(b%2 == 0){
    //     return ans * ans; //even
    // }else{
    //     return a * ans * ans; //odd
    // }
}

int main()
{

    int a;
    int b;

    cout << "Enter the number : ";
    cin >> a;
    cout << "Enter the power : ";
    cin >> b;

    int ans = power(a, b);

    cout << "The power of your number " << a << " is : " << ans << endl;

    return 0;
}
