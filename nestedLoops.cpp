/*
nested loops : a loop within a loop is called nested loop
*/

#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 1; j <= 4; ++j)
        {
            if (i == 1 || i == 4)
            {
                cout << "*";
            }

            else if ((i == 2 && j == 1) || (i == 2 && j == 4) || (i == 3 && j == 1) || (i == 3 && j == 4))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}