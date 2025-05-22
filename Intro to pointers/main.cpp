#include <iostream>

using namespace std;

int main()
{

    int n = 5;
    cout << n << endl;

    cout << &n << endl; //address of n

    int* ptr = &n;
    cout << ptr << endl;// address of n in ptr

    cout << *ptr << endl;//dereference pointer to find value of n stored in memory

    *ptr = 10;

    cout <<*ptr << endl;
    cout << n << endl; //n holds 10 because address is the same
    //pointer has to be the same type of what variable it is holding

    //wrong code
    //int* ptr2;
   // *ptr2 = 7;//no address

    //to fix
    int v;
    int* ptr2 = &v;
    *ptr2 = 7;

    cout << v << endl;

    return 0;
}

