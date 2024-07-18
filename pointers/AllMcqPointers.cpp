#include <iostream>
using namespace std;

// void update(int * p){ MCQ #17
//     * p = * p * 2;
// }

// void increment(int ** q){ MCQ #20
//     ++(**q);
// }

int main()
{

    // MCQ #1
    //  int first = 8;
    //  int second = 18;
    //  int * p = &second;
    //  * p = 9;
    //  cout<<first<<" "<<second<<" "<<endl;

    // MCQ #2
    //  int first = 6;
    //  int * p = &first;
    //  int * q = p;
    //  (*q)++;
    //  cout<<first<<endl;

    // MCQ #3
    //  int first = 8;
    //  int * p = &first;
    //  cout<<(*p)++<<" "<<endl;
    //  cout<<first<<endl;

    // MCQ #4
    //  int * p = 0;
    //  int first = 110;
    //  *p = first;  //use this to print 110 p = &first;
    //  cout<<* p<<endl;
    // Segmentation faults in C or C++ is an error that occurs when a program attempts to access a memory location it does not have permission to access

    // MCQ #5
    //  int first = 11;
    //  int second = 15;
    //  int * third = & second;
    //  first = * third;
    //  * third = * third + 2;
    //  cout<< first << " "<< second <<endl;

    // MCQ #6
    //  float f = 12.5;
    //  float p = 21.5;
    //  float * ptr = &f;
    //  (*ptr)++;
    //  *ptr = p;
    //  cout<< *ptr << " "<< f << " " << p << " "<< endl;

    // MCQ #7
    //  int arr[5];
    //  int * ptr ; // pointer size is always 8 bytes
    //  cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    // MCQ #8
    //  int arr[] = {11,21,31,41,51};
    //  cout << *(arr) << " " << *(arr + 1) << endl;

    // MCQ #9
    //  int arr[3] = {10,20,30};
    //  cout << arr << " " << &arr << " " << &arr[0] << endl; //all are same

    // MCQ #10
    //  int arr[4] = {1,2,3,4};
    //  int * p = arr;
    //  cout<< p[2] << endl; // --> *(p + 2)

    // MCQ #11
    //  int arr[5] = {11,12,13,14,15};
    //  cout << *(arr) << " " << *(arr + 3) << endl;

    // MCQ #12
    //  int arr[] = {1,2,3,4,5};
    //  int * ptr = arr++; //cannot increment the array in symbol table
    //  cout<<*ptr<<endl;

    // MCQ #13
    //  char ch = 'a';
    //  char * ptr = &ch;
    //  ch++;
    //  cout<<*ptr<<endl;

    // MCQ #14
    //  char arr[] = "meet";
    //  char * ptr = &arr[0];
    //  cout<< ptr <<endl;

    // MCQ #15
    //  char arr[] = "meet";
    //  char * ptr = &arr[0];
    //  ptr++;
    //  cout<< ptr <<endl;

    // MCQ #16
    //  char str[] = "dodiya";
    //  char *p = str;
    //  cout << str[0] << " " << p[0] << endl;

    // MCQ #17
    //  int i = 10;
    //  update(&i);
    //  cout << i << endl;

    // MCQ #18
    //  int first = 5;
    //  int * p = &first;
    //  int ** q = &p;
    //  int second = (**q)++ + 2;
    //  cout<<first << " "<< second<< " "<<endl;

    // MCQ #19
    //  int first = 100;
    //  int * p = &first;
    //  int ** q = &p;
    //  int second = ++(**q);
    //  int *r = *q;
    //  ++(*r);
    //  cout << first << " " << second <<endl;

    // MCQ #20
    //  int num = 110;
    //  int *ptr = &num;
    //  increment(&ptr);
    //  cout<<num<<endl;

    return 0;
}