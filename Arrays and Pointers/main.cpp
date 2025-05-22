
#include <iostream>

using namespace std;

int main()
{
    int luckyNumbers[5]; //= {2,3,5,7,9};
/*
    cout << luckyNumbers << endl; //address of first element in array
    cout << &luckyNumbers[0] << endl;//[] almost acts as a dereference

    cout << luckyNumbers[2] << endl;
    cout << *(luckyNumbers+2) << endl;//from base address +2 addresses and dereference for value

*/

    for (int i = 0; i<=4;i++)
    {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }

    for (int i = 0; i<=4;i++)//if i>4 then there is a fuck-up and access memory from other process
    {
        cout << *(luckyNumbers+i) << " ";
    }

    return 0;
}
