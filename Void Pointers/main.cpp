#include <iostream>

using namespace std;

void printNumber(int* numberPtr)
{
    cout << *numberPtr << endl;
}

void printChar(char* charPtr)
{
    cout << *charPtr << endl;
}

void print(void* ptr, char type)//void pointer cna poiunt to a pointer of any type, but cannot be dereferenced, be careful, compiler wont lyk
{

    switch (type)
    {
        case 'i': cout << *((int*)ptr) << endl;break;
        case 'c': cout << *((char*)ptr) << endl;break;//casting types, jesus

    }

}
int main()
{

    int number = 5;
    char letter = 'A';

    printNumber(&number);
    printChar(&letter);

    print(&number, 'i');
    print(&letter, 'c');


    return 0;
}

