#include <iostream>
// #include "Filetofile.cpp"
using namespace std;

// OOP's
// Define: It is a programming paradigm that uses "objects" to design applications and computer programs

// 1. OOP is faster and easier to execute
// 2. OOP provides a clear structure for the programs
// 3. OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
// 4. OOP makes it possible to create full reusable applications with less code and shorter development time

class Hero
{ // class is a user define data type and it is a building block or blueprint for making any program with oop's.
    int health = 100;

public: // access anywhere
    int publicHo = 69;

private: // access only within class
    int privateHo = 96;

    // void print(){
    //     cout<<"Public : "<<publicHo<<"Private : "<<privateHo<<endl;
    // }
};

int main()
{

    // object is an instance of class to access any class we create object

    Hero h1; // for empty class size = 1 byte, tere identification rakhna ka liya tooja ek byte deta hoo.
    // Meet m; //import export

    cout << sizeof(Hero) << endl; // zeetna class ma content ha utna size
    cout << sizeof(h1) << endl;

    // cout<<"Accessing universal : "<<h1.health<<endl; //by deafult its private we have to put in public.
    cout << "Accessing public : " << h1.publicHo << endl;
    // cout<<"Accessing private : "<<h1.privateHo<<endl;

    return 0;
}