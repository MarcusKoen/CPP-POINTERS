
//What a mind fuck
#include <iostream>

using namespace std;

int main()
{

    int rows, cols;

    cout << "How many rows, chols:" <<endl;
    cin >> rows >>cols;

        //Procedure just follow the image on github.
    int **table = new int*[rows];

    for (int i = 0; i < rows; i++)
    {

        table[i]=new int[cols];
    }

    table[1][2] = 88;
    //Deallocate in reverse

        for (int i = 0; i < rows; i++)
    {

        delete[] table[i];
    }
    delete[] table;
    table = NULL;
    return 0;
}

