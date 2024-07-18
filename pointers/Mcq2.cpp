#include <iostream>
using namespace std;

int main()
{

    // pointer a variable in cpp which store address of other variable

    // & => address of operator
    // * => Derefernce operator

    int i = 7;
    int *t = &i;

    *t = *t + 1;
    cout << *t << endl; // it will increment the value 7 -> 8

    cout << "Before t : " << t << endl;
    t = t + 1;
    cout << "After t : " << t << endl; // it will not increment by 1 it will increment to next integer like int 4 + int 4 = int 8

    // Only addition and subtraction operations are allowed; the others aren’t allowed on pointers

    // https://www.naukri.com/code360/guided-paths/pointers/content/235645/offering/3168908

    return 0;
}