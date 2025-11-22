/*
user input : 5

sum = 1+2+3+4+5 = 15

*/

#include <iostream>
using namespace std;

int main()
{
    int rows = 4;
    for (int i = 1; i <= rows; ++i)
    {
        for (int space = 1; space <= rows - i; ++space)
        {
            cout << " ";
        }

        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}