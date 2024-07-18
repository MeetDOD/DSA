#include <iostream>
using namespace std;

class A
{
public:
    void function()
    {
        cout << "Calling A with :: operator" << endl;
    }
};

class B
{
public:
    void function()
    {
        cout << "Calling B with :: operator" << endl;
    }
};

class C : public A, public B
{
};

int main()
{

    C obj;
    obj.A::function();
    obj.B::function();

    return 0;
}
